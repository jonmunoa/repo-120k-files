<template>
  <section class="panel-49329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49329");
const base = ref(49329);
const total = computed(() => base.value * 2);

function incrementar49329() {
  base.value++;
}
</script>
