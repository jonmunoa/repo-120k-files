<template>
  <section class="panel-5933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5933");
const base = ref(5933);
const total = computed(() => base.value * 2);

function incrementar5933() {
  base.value++;
}
</script>
