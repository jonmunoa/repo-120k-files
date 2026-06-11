<template>
  <section class="panel-9381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9381");
const base = ref(9381);
const total = computed(() => base.value * 2);

function incrementar9381() {
  base.value++;
}
</script>
