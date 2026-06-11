<template>
  <section class="panel-30269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30269");
const base = ref(30269);
const total = computed(() => base.value * 2);

function incrementar30269() {
  base.value++;
}
</script>
