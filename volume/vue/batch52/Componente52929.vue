<template>
  <section class="panel-52929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52929");
const base = ref(52929);
const total = computed(() => base.value * 2);

function incrementar52929() {
  base.value++;
}
</script>
