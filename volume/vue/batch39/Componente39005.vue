<template>
  <section class="panel-39005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39005");
const base = ref(39005);
const total = computed(() => base.value * 2);

function incrementar39005() {
  base.value++;
}
</script>
