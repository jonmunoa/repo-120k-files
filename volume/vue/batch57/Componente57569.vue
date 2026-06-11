<template>
  <section class="panel-57569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57569");
const base = ref(57569);
const total = computed(() => base.value * 2);

function incrementar57569() {
  base.value++;
}
</script>
