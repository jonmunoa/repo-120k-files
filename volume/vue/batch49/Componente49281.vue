<template>
  <section class="panel-49281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49281");
const base = ref(49281);
const total = computed(() => base.value * 2);

function incrementar49281() {
  base.value++;
}
</script>
