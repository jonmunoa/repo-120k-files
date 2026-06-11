<template>
  <section class="panel-31925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31925");
const base = ref(31925);
const total = computed(() => base.value * 2);

function incrementar31925() {
  base.value++;
}
</script>
