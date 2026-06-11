<template>
  <section class="panel-44849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44849");
const base = ref(44849);
const total = computed(() => base.value * 2);

function incrementar44849() {
  base.value++;
}
</script>
