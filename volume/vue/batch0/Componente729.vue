<template>
  <section class="panel-729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 729");
const base = ref(729);
const total = computed(() => base.value * 2);

function incrementar729() {
  base.value++;
}
</script>
