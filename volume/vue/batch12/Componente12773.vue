<template>
  <section class="panel-12773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12773");
const base = ref(12773);
const total = computed(() => base.value * 2);

function incrementar12773() {
  base.value++;
}
</script>
