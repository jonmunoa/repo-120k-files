<template>
  <section class="panel-3933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3933");
const base = ref(3933);
const total = computed(() => base.value * 2);

function incrementar3933() {
  base.value++;
}
</script>
