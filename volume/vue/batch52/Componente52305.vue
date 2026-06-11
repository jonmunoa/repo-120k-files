<template>
  <section class="panel-52305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52305");
const base = ref(52305);
const total = computed(() => base.value * 2);

function incrementar52305() {
  base.value++;
}
</script>
