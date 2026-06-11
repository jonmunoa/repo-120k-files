<template>
  <section class="panel-42133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42133");
const base = ref(42133);
const total = computed(() => base.value * 2);

function incrementar42133() {
  base.value++;
}
</script>
