<template>
  <section class="panel-29273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29273");
const base = ref(29273);
const total = computed(() => base.value * 2);

function incrementar29273() {
  base.value++;
}
</script>
