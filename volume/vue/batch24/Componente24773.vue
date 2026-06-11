<template>
  <section class="panel-24773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24773");
const base = ref(24773);
const total = computed(() => base.value * 2);

function incrementar24773() {
  base.value++;
}
</script>
