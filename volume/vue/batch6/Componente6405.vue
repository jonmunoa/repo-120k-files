<template>
  <section class="panel-6405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6405");
const base = ref(6405);
const total = computed(() => base.value * 2);

function incrementar6405() {
  base.value++;
}
</script>
