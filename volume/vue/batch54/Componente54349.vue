<template>
  <section class="panel-54349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54349");
const base = ref(54349);
const total = computed(() => base.value * 2);

function incrementar54349() {
  base.value++;
}
</script>
