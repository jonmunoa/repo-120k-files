<template>
  <section class="panel-9573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9573");
const base = ref(9573);
const total = computed(() => base.value * 2);

function incrementar9573() {
  base.value++;
}
</script>
