<template>
  <section class="panel-18081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18081");
const base = ref(18081);
const total = computed(() => base.value * 2);

function incrementar18081() {
  base.value++;
}
</script>
