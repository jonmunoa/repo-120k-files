<template>
  <section class="panel-53917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53917");
const base = ref(53917);
const total = computed(() => base.value * 2);

function incrementar53917() {
  base.value++;
}
</script>
