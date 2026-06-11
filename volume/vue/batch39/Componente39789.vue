<template>
  <section class="panel-39789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39789");
const base = ref(39789);
const total = computed(() => base.value * 2);

function incrementar39789() {
  base.value++;
}
</script>
