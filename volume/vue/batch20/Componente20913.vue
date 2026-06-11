<template>
  <section class="panel-20913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20913");
const base = ref(20913);
const total = computed(() => base.value * 2);

function incrementar20913() {
  base.value++;
}
</script>
