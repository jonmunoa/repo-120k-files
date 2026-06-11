<template>
  <section class="panel-25581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25581");
const base = ref(25581);
const total = computed(() => base.value * 2);

function incrementar25581() {
  base.value++;
}
</script>
