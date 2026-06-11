<template>
  <section class="panel-15881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15881");
const base = ref(15881);
const total = computed(() => base.value * 2);

function incrementar15881() {
  base.value++;
}
</script>
