<template>
  <section class="panel-30133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30133");
const base = ref(30133);
const total = computed(() => base.value * 2);

function incrementar30133() {
  base.value++;
}
</script>
