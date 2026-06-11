<template>
  <section class="panel-10305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10305");
const base = ref(10305);
const total = computed(() => base.value * 2);

function incrementar10305() {
  base.value++;
}
</script>
