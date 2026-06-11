<template>
  <section class="panel-25889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25889");
const base = ref(25889);
const total = computed(() => base.value * 2);

function incrementar25889() {
  base.value++;
}
</script>
