<template>
  <section class="panel-18701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18701");
const base = ref(18701);
const total = computed(() => base.value * 2);

function incrementar18701() {
  base.value++;
}
</script>
