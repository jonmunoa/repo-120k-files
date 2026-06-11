<template>
  <section class="panel-34117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34117");
const base = ref(34117);
const total = computed(() => base.value * 2);

function incrementar34117() {
  base.value++;
}
</script>
