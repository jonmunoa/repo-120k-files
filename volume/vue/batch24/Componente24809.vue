<template>
  <section class="panel-24809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24809");
const base = ref(24809);
const total = computed(() => base.value * 2);

function incrementar24809() {
  base.value++;
}
</script>
