<template>
  <section class="panel-9729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9729");
const base = ref(9729);
const total = computed(() => base.value * 2);

function incrementar9729() {
  base.value++;
}
</script>
