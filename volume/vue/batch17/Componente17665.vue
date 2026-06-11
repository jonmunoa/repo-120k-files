<template>
  <section class="panel-17665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17665");
const base = ref(17665);
const total = computed(() => base.value * 2);

function incrementar17665() {
  base.value++;
}
</script>
