<template>
  <section class="panel-4969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4969");
const base = ref(4969);
const total = computed(() => base.value * 2);

function incrementar4969() {
  base.value++;
}
</script>
