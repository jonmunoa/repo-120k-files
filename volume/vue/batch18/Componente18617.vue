<template>
  <section class="panel-18617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18617");
const base = ref(18617);
const total = computed(() => base.value * 2);

function incrementar18617() {
  base.value++;
}
</script>
