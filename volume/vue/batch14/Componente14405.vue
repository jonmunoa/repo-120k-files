<template>
  <section class="panel-14405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14405");
const base = ref(14405);
const total = computed(() => base.value * 2);

function incrementar14405() {
  base.value++;
}
</script>
