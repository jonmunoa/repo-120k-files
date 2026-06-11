<template>
  <section class="panel-51281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51281");
const base = ref(51281);
const total = computed(() => base.value * 2);

function incrementar51281() {
  base.value++;
}
</script>
