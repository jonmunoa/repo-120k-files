<template>
  <section class="panel-52469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52469");
const base = ref(52469);
const total = computed(() => base.value * 2);

function incrementar52469() {
  base.value++;
}
</script>
