<template>
  <section class="panel-10729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10729");
const base = ref(10729);
const total = computed(() => base.value * 2);

function incrementar10729() {
  base.value++;
}
</script>
