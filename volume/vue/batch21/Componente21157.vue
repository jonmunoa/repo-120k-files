<template>
  <section class="panel-21157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21157");
const base = ref(21157);
const total = computed(() => base.value * 2);

function incrementar21157() {
  base.value++;
}
</script>
