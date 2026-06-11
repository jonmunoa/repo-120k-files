<template>
  <section class="panel-52809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52809");
const base = ref(52809);
const total = computed(() => base.value * 2);

function incrementar52809() {
  base.value++;
}
</script>
