<template>
  <section class="panel-54773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54773");
const base = ref(54773);
const total = computed(() => base.value * 2);

function incrementar54773() {
  base.value++;
}
</script>
