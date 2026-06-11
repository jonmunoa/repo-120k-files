<template>
  <section class="panel-32305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32305");
const base = ref(32305);
const total = computed(() => base.value * 2);

function incrementar32305() {
  base.value++;
}
</script>
