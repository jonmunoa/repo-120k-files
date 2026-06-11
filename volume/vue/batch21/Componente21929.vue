<template>
  <section class="panel-21929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21929");
const base = ref(21929);
const total = computed(() => base.value * 2);

function incrementar21929() {
  base.value++;
}
</script>
