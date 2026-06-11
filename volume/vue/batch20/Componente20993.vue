<template>
  <section class="panel-20993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20993");
const base = ref(20993);
const total = computed(() => base.value * 2);

function incrementar20993() {
  base.value++;
}
</script>
