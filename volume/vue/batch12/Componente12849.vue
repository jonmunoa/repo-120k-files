<template>
  <section class="panel-12849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12849");
const base = ref(12849);
const total = computed(() => base.value * 2);

function incrementar12849() {
  base.value++;
}
</script>
