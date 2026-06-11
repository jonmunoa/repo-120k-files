<template>
  <section class="panel-18405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18405");
const base = ref(18405);
const total = computed(() => base.value * 2);

function incrementar18405() {
  base.value++;
}
</script>
