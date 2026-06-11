<template>
  <section class="panel-18309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18309");
const base = ref(18309);
const total = computed(() => base.value * 2);

function incrementar18309() {
  base.value++;
}
</script>
