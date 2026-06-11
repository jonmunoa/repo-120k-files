<template>
  <section class="panel-49977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49977");
const base = ref(49977);
const total = computed(() => base.value * 2);

function incrementar49977() {
  base.value++;
}
</script>
