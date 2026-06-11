<template>
  <section class="panel-10713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10713");
const base = ref(10713);
const total = computed(() => base.value * 2);

function incrementar10713() {
  base.value++;
}
</script>
