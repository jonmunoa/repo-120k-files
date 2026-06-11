<template>
  <section class="panel-19773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19773");
const base = ref(19773);
const total = computed(() => base.value * 2);

function incrementar19773() {
  base.value++;
}
</script>
