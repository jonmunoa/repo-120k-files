<template>
  <section class="panel-18281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18281");
const base = ref(18281);
const total = computed(() => base.value * 2);

function incrementar18281() {
  base.value++;
}
</script>
