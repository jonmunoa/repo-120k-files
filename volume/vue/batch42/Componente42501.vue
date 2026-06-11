<template>
  <section class="panel-42501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42501");
const base = ref(42501);
const total = computed(() => base.value * 2);

function incrementar42501() {
  base.value++;
}
</script>
