<template>
  <section class="panel-56177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56177");
const base = ref(56177);
const total = computed(() => base.value * 2);

function incrementar56177() {
  base.value++;
}
</script>
