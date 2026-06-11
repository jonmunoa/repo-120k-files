<template>
  <section class="panel-29789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29789");
const base = ref(29789);
const total = computed(() => base.value * 2);

function incrementar29789() {
  base.value++;
}
</script>
