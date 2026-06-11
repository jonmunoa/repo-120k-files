<template>
  <section class="panel-45849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45849");
const base = ref(45849);
const total = computed(() => base.value * 2);

function incrementar45849() {
  base.value++;
}
</script>
