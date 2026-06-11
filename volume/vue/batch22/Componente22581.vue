<template>
  <section class="panel-22581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22581");
const base = ref(22581);
const total = computed(() => base.value * 2);

function incrementar22581() {
  base.value++;
}
</script>
