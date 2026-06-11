<template>
  <section class="panel-33729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33729");
const base = ref(33729);
const total = computed(() => base.value * 2);

function incrementar33729() {
  base.value++;
}
</script>
