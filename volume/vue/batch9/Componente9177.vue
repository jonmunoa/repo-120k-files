<template>
  <section class="panel-9177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9177");
const base = ref(9177);
const total = computed(() => base.value * 2);

function incrementar9177() {
  base.value++;
}
</script>
