<template>
  <section class="panel-35701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35701");
const base = ref(35701);
const total = computed(() => base.value * 2);

function incrementar35701() {
  base.value++;
}
</script>
