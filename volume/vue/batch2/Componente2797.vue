<template>
  <section class="panel-2797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2797");
const base = ref(2797);
const total = computed(() => base.value * 2);

function incrementar2797() {
  base.value++;
}
</script>
