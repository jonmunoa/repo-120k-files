<template>
  <section class="panel-27933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27933");
const base = ref(27933);
const total = computed(() => base.value * 2);

function incrementar27933() {
  base.value++;
}
</script>
