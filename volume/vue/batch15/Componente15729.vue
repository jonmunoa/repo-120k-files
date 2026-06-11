<template>
  <section class="panel-15729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15729");
const base = ref(15729);
const total = computed(() => base.value * 2);

function incrementar15729() {
  base.value++;
}
</script>
