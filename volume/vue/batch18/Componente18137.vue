<template>
  <section class="panel-18137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18137");
const base = ref(18137);
const total = computed(() => base.value * 2);

function incrementar18137() {
  base.value++;
}
</script>
