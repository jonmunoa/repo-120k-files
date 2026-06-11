<template>
  <section class="panel-20797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20797");
const base = ref(20797);
const total = computed(() => base.value * 2);

function incrementar20797() {
  base.value++;
}
</script>
