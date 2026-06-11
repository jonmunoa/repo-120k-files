<template>
  <section class="panel-54849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54849");
const base = ref(54849);
const total = computed(() => base.value * 2);

function incrementar54849() {
  base.value++;
}
</script>
