<template>
  <section class="panel-54421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54421");
const base = ref(54421);
const total = computed(() => base.value * 2);

function incrementar54421() {
  base.value++;
}
</script>
