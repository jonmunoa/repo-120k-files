<template>
  <section class="panel-5797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5797");
const base = ref(5797);
const total = computed(() => base.value * 2);

function incrementar5797() {
  base.value++;
}
</script>
