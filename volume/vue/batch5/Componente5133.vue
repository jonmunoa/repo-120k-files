<template>
  <section class="panel-5133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5133");
const base = ref(5133);
const total = computed(() => base.value * 2);

function incrementar5133() {
  base.value++;
}
</script>
