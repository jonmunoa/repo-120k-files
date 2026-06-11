<template>
  <section class="panel-20457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20457");
const base = ref(20457);
const total = computed(() => base.value * 2);

function incrementar20457() {
  base.value++;
}
</script>
