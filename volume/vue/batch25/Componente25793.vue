<template>
  <section class="panel-25793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25793");
const base = ref(25793);
const total = computed(() => base.value * 2);

function incrementar25793() {
  base.value++;
}
</script>
