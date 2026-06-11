<template>
  <section class="panel-31281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31281");
const base = ref(31281);
const total = computed(() => base.value * 2);

function incrementar31281() {
  base.value++;
}
</script>
