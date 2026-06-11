<template>
  <section class="panel-17881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17881");
const base = ref(17881);
const total = computed(() => base.value * 2);

function incrementar17881() {
  base.value++;
}
</script>
