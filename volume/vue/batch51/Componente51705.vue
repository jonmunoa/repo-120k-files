<template>
  <section class="panel-51705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51705");
const base = ref(51705);
const total = computed(() => base.value * 2);

function incrementar51705() {
  base.value++;
}
</script>
