<template>
  <section class="panel-17957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17957");
const base = ref(17957);
const total = computed(() => base.value * 2);

function incrementar17957() {
  base.value++;
}
</script>
