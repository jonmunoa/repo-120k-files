<template>
  <section class="panel-10677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10677");
const base = ref(10677);
const total = computed(() => base.value * 2);

function incrementar10677() {
  base.value++;
}
</script>
