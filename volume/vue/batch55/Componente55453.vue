<template>
  <section class="panel-55453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55453");
const base = ref(55453);
const total = computed(() => base.value * 2);

function incrementar55453() {
  base.value++;
}
</script>
