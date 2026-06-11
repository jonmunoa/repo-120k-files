<template>
  <section class="panel-5593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5593");
const base = ref(5593);
const total = computed(() => base.value * 2);

function incrementar5593() {
  base.value++;
}
</script>
