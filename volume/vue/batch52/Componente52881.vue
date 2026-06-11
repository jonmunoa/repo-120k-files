<template>
  <section class="panel-52881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52881");
const base = ref(52881);
const total = computed(() => base.value * 2);

function incrementar52881() {
  base.value++;
}
</script>
