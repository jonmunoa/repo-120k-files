<template>
  <section class="panel-34881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34881");
const base = ref(34881);
const total = computed(() => base.value * 2);

function incrementar34881() {
  base.value++;
}
</script>
