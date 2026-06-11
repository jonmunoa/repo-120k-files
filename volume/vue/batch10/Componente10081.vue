<template>
  <section class="panel-10081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10081");
const base = ref(10081);
const total = computed(() => base.value * 2);

function incrementar10081() {
  base.value++;
}
</script>
