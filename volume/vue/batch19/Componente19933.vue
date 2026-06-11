<template>
  <section class="panel-19933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19933");
const base = ref(19933);
const total = computed(() => base.value * 2);

function incrementar19933() {
  base.value++;
}
</script>
