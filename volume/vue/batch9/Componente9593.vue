<template>
  <section class="panel-9593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9593");
const base = ref(9593);
const total = computed(() => base.value * 2);

function incrementar9593() {
  base.value++;
}
</script>
