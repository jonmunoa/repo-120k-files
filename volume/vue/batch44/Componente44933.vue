<template>
  <section class="panel-44933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44933");
const base = ref(44933);
const total = computed(() => base.value * 2);

function incrementar44933() {
  base.value++;
}
</script>
