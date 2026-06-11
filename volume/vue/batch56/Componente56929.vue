<template>
  <section class="panel-56929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56929");
const base = ref(56929);
const total = computed(() => base.value * 2);

function incrementar56929() {
  base.value++;
}
</script>
