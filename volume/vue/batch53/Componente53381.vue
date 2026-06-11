<template>
  <section class="panel-53381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53381");
const base = ref(53381);
const total = computed(() => base.value * 2);

function incrementar53381() {
  base.value++;
}
</script>
