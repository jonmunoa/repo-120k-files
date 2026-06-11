<template>
  <section class="panel-31105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31105");
const base = ref(31105);
const total = computed(() => base.value * 2);

function incrementar31105() {
  base.value++;
}
</script>
