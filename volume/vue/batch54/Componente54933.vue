<template>
  <section class="panel-54933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54933");
const base = ref(54933);
const total = computed(() => base.value * 2);

function incrementar54933() {
  base.value++;
}
</script>
