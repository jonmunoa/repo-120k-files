<template>
  <section class="panel-5">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5");
const base = ref(5);
const total = computed(() => base.value * 2);

function incrementar5() {
  base.value++;
}
</script>
