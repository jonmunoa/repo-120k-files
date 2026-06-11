<template>
  <section class="panel-13461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13461");
const base = ref(13461);
const total = computed(() => base.value * 2);

function incrementar13461() {
  base.value++;
}
</script>
