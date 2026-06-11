<template>
  <section class="panel-56877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56877");
const base = ref(56877);
const total = computed(() => base.value * 2);

function incrementar56877() {
  base.value++;
}
</script>
