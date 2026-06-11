<template>
  <section class="panel-14137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14137");
const base = ref(14137);
const total = computed(() => base.value * 2);

function incrementar14137() {
  base.value++;
}
</script>
