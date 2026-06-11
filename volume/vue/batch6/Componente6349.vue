<template>
  <section class="panel-6349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6349");
const base = ref(6349);
const total = computed(() => base.value * 2);

function incrementar6349() {
  base.value++;
}
</script>
