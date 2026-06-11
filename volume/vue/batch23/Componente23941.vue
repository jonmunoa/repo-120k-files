<template>
  <section class="panel-23941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23941");
const base = ref(23941);
const total = computed(() => base.value * 2);

function incrementar23941() {
  base.value++;
}
</script>
