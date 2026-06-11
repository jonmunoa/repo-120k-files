<template>
  <section class="panel-10797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10797");
const base = ref(10797);
const total = computed(() => base.value * 2);

function incrementar10797() {
  base.value++;
}
</script>
