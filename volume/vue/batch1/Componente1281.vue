<template>
  <section class="panel-1281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1281");
const base = ref(1281);
const total = computed(() => base.value * 2);

function incrementar1281() {
  base.value++;
}
</script>
