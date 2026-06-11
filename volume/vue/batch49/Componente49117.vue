<template>
  <section class="panel-49117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49117");
const base = ref(49117);
const total = computed(() => base.value * 2);

function incrementar49117() {
  base.value++;
}
</script>
