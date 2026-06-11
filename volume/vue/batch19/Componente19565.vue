<template>
  <section class="panel-19565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19565");
const base = ref(19565);
const total = computed(() => base.value * 2);

function incrementar19565() {
  base.value++;
}
</script>
