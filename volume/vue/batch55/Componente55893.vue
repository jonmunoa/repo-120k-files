<template>
  <section class="panel-55893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55893");
const base = ref(55893);
const total = computed(() => base.value * 2);

function incrementar55893() {
  base.value++;
}
</script>
