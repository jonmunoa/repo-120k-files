<template>
  <section class="panel-41933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41933");
const base = ref(41933);
const total = computed(() => base.value * 2);

function incrementar41933() {
  base.value++;
}
</script>
