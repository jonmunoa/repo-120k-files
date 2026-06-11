<template>
  <section class="panel-42393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42393");
const base = ref(42393);
const total = computed(() => base.value * 2);

function incrementar42393() {
  base.value++;
}
</script>
