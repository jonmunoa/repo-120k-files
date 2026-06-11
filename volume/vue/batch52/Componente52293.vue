<template>
  <section class="panel-52293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52293");
const base = ref(52293);
const total = computed(() => base.value * 2);

function incrementar52293() {
  base.value++;
}
</script>
