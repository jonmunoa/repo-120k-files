<template>
  <section class="panel-51809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51809");
const base = ref(51809);
const total = computed(() => base.value * 2);

function incrementar51809() {
  base.value++;
}
</script>
