<template>
  <section class="panel-54997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54997");
const base = ref(54997);
const total = computed(() => base.value * 2);

function incrementar54997() {
  base.value++;
}
</script>
