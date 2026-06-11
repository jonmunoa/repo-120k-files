<template>
  <section class="panel-30933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30933");
const base = ref(30933);
const total = computed(() => base.value * 2);

function incrementar30933() {
  base.value++;
}
</script>
