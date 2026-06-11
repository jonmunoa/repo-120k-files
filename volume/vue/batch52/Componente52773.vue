<template>
  <section class="panel-52773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52773");
const base = ref(52773);
const total = computed(() => base.value * 2);

function incrementar52773() {
  base.value++;
}
</script>
