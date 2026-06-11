<template>
  <section class="panel-45533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45533");
const base = ref(45533);
const total = computed(() => base.value * 2);

function incrementar45533() {
  base.value++;
}
</script>
