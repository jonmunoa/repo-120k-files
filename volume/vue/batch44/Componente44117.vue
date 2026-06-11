<template>
  <section class="panel-44117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44117");
const base = ref(44117);
const total = computed(() => base.value * 2);

function incrementar44117() {
  base.value++;
}
</script>
