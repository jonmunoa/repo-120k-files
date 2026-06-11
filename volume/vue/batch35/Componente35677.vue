<template>
  <section class="panel-35677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35677");
const base = ref(35677);
const total = computed(() => base.value * 2);

function incrementar35677() {
  base.value++;
}
</script>
