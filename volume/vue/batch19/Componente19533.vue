<template>
  <section class="panel-19533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19533");
const base = ref(19533);
const total = computed(() => base.value * 2);

function incrementar19533() {
  base.value++;
}
</script>
