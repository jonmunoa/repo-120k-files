<template>
  <section class="panel-37381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37381");
const base = ref(37381);
const total = computed(() => base.value * 2);

function incrementar37381() {
  base.value++;
}
</script>
