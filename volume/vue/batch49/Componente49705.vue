<template>
  <section class="panel-49705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49705");
const base = ref(49705);
const total = computed(() => base.value * 2);

function incrementar49705() {
  base.value++;
}
</script>
