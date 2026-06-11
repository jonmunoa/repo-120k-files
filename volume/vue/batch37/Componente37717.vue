<template>
  <section class="panel-37717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37717");
const base = ref(37717);
const total = computed(() => base.value * 2);

function incrementar37717() {
  base.value++;
}
</script>
