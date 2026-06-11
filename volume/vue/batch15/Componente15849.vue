<template>
  <section class="panel-15849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15849");
const base = ref(15849);
const total = computed(() => base.value * 2);

function incrementar15849() {
  base.value++;
}
</script>
