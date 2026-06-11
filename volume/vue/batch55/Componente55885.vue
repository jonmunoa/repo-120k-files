<template>
  <section class="panel-55885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55885");
const base = ref(55885);
const total = computed(() => base.value * 2);

function incrementar55885() {
  base.value++;
}
</script>
