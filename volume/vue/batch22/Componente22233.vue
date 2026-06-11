<template>
  <section class="panel-22233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22233");
const base = ref(22233);
const total = computed(() => base.value * 2);

function incrementar22233() {
  base.value++;
}
</script>
