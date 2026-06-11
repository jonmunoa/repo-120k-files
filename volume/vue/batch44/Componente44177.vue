<template>
  <section class="panel-44177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44177");
const base = ref(44177);
const total = computed(() => base.value * 2);

function incrementar44177() {
  base.value++;
}
</script>
