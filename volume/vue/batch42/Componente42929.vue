<template>
  <section class="panel-42929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42929");
const base = ref(42929);
const total = computed(() => base.value * 2);

function incrementar42929() {
  base.value++;
}
</script>
