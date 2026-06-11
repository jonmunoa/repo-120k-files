<template>
  <section class="panel-25381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25381");
const base = ref(25381);
const total = computed(() => base.value * 2);

function incrementar25381() {
  base.value++;
}
</script>
