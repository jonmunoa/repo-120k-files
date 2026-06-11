<template>
  <section class="panel-45829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45829");
const base = ref(45829);
const total = computed(() => base.value * 2);

function incrementar45829() {
  base.value++;
}
</script>
