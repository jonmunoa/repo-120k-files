<template>
  <section class="panel-5281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5281");
const base = ref(5281);
const total = computed(() => base.value * 2);

function incrementar5281() {
  base.value++;
}
</script>
