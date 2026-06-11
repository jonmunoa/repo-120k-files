<template>
  <section class="panel-13593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13593");
const base = ref(13593);
const total = computed(() => base.value * 2);

function incrementar13593() {
  base.value++;
}
</script>
