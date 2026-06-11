<template>
  <section class="panel-2381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2381");
const base = ref(2381);
const total = computed(() => base.value * 2);

function incrementar2381() {
  base.value++;
}
</script>
