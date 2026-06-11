<template>
  <section class="panel-15093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15093");
const base = ref(15093);
const total = computed(() => base.value * 2);

function incrementar15093() {
  base.value++;
}
</script>
