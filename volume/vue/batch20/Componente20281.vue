<template>
  <section class="panel-20281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20281");
const base = ref(20281);
const total = computed(() => base.value * 2);

function incrementar20281() {
  base.value++;
}
</script>
