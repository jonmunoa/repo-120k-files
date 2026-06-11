<template>
  <section class="panel-7405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7405");
const base = ref(7405);
const total = computed(() => base.value * 2);

function incrementar7405() {
  base.value++;
}
</script>
