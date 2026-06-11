<template>
  <section class="panel-48177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48177");
const base = ref(48177);
const total = computed(() => base.value * 2);

function incrementar48177() {
  base.value++;
}
</script>
