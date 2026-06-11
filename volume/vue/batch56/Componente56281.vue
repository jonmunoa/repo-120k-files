<template>
  <section class="panel-56281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56281");
const base = ref(56281);
const total = computed(() => base.value * 2);

function incrementar56281() {
  base.value++;
}
</script>
