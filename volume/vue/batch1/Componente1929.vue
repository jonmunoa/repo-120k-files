<template>
  <section class="panel-1929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1929");
const base = ref(1929);
const total = computed(() => base.value * 2);

function incrementar1929() {
  base.value++;
}
</script>
