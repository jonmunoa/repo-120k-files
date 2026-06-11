<template>
  <section class="panel-27685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27685");
const base = ref(27685);
const total = computed(() => base.value * 2);

function incrementar27685() {
  base.value++;
}
</script>
