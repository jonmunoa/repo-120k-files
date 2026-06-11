<template>
  <section class="panel-41281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41281");
const base = ref(41281);
const total = computed(() => base.value * 2);

function incrementar41281() {
  base.value++;
}
</script>
