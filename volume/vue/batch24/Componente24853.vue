<template>
  <section class="panel-24853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24853");
const base = ref(24853);
const total = computed(() => base.value * 2);

function incrementar24853() {
  base.value++;
}
</script>
