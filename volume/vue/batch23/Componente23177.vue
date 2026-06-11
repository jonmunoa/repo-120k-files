<template>
  <section class="panel-23177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23177");
const base = ref(23177);
const total = computed(() => base.value * 2);

function incrementar23177() {
  base.value++;
}
</script>
