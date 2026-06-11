<template>
  <section class="panel-16969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16969");
const base = ref(16969);
const total = computed(() => base.value * 2);

function incrementar16969() {
  base.value++;
}
</script>
