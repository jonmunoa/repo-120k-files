<template>
  <section class="panel-35581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35581");
const base = ref(35581);
const total = computed(() => base.value * 2);

function incrementar35581() {
  base.value++;
}
</script>
