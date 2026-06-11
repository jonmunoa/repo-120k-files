<template>
  <section class="panel-20481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20481");
const base = ref(20481);
const total = computed(() => base.value * 2);

function incrementar20481() {
  base.value++;
}
</script>
