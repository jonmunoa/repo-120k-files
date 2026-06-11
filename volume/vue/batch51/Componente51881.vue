<template>
  <section class="panel-51881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51881");
const base = ref(51881);
const total = computed(() => base.value * 2);

function incrementar51881() {
  base.value++;
}
</script>
