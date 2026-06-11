<template>
  <section class="panel-20209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20209");
const base = ref(20209);
const total = computed(() => base.value * 2);

function incrementar20209() {
  base.value++;
}
</script>
