<template>
  <section class="panel-30969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30969");
const base = ref(30969);
const total = computed(() => base.value * 2);

function incrementar30969() {
  base.value++;
}
</script>
