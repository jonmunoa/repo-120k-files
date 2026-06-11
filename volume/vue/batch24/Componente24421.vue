<template>
  <section class="panel-24421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24421");
const base = ref(24421);
const total = computed(() => base.value * 2);

function incrementar24421() {
  base.value++;
}
</script>
