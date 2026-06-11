<template>
  <section class="panel-49789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49789");
const base = ref(49789);
const total = computed(() => base.value * 2);

function incrementar49789() {
  base.value++;
}
</script>
