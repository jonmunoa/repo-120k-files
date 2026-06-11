<template>
  <section class="panel-39933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39933");
const base = ref(39933);
const total = computed(() => base.value * 2);

function incrementar39933() {
  base.value++;
}
</script>
