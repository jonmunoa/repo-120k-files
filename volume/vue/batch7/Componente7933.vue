<template>
  <section class="panel-7933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7933");
const base = ref(7933);
const total = computed(() => base.value * 2);

function incrementar7933() {
  base.value++;
}
</script>
