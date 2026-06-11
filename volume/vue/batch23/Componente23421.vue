<template>
  <section class="panel-23421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23421");
const base = ref(23421);
const total = computed(() => base.value * 2);

function incrementar23421() {
  base.value++;
}
</script>
