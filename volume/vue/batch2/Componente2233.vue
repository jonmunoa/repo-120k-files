<template>
  <section class="panel-2233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2233");
const base = ref(2233);
const total = computed(() => base.value * 2);

function incrementar2233() {
  base.value++;
}
</script>
