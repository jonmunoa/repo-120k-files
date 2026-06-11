<template>
  <section class="panel-41617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41617");
const base = ref(41617);
const total = computed(() => base.value * 2);

function incrementar41617() {
  base.value++;
}
</script>
