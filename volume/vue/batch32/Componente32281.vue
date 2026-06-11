<template>
  <section class="panel-32281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32281");
const base = ref(32281);
const total = computed(() => base.value * 2);

function incrementar32281() {
  base.value++;
}
</script>
