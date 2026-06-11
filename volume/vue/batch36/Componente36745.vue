<template>
  <section class="panel-36745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36745");
const base = ref(36745);
const total = computed(() => base.value * 2);

function incrementar36745() {
  base.value++;
}
</script>
