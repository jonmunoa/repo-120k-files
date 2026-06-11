<template>
  <section class="panel-45269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45269");
const base = ref(45269);
const total = computed(() => base.value * 2);

function incrementar45269() {
  base.value++;
}
</script>
