<template>
  <section class="panel-32233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32233");
const base = ref(32233);
const total = computed(() => base.value * 2);

function incrementar32233() {
  base.value++;
}
</script>
