<template>
  <section class="panel-10525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10525");
const base = ref(10525);
const total = computed(() => base.value * 2);

function incrementar10525() {
  base.value++;
}
</script>
