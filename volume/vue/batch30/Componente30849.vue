<template>
  <section class="panel-30849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30849");
const base = ref(30849);
const total = computed(() => base.value * 2);

function incrementar30849() {
  base.value++;
}
</script>
