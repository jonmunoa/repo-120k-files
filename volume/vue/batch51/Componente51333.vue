<template>
  <section class="panel-51333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51333");
const base = ref(51333);
const total = computed(() => base.value * 2);

function incrementar51333() {
  base.value++;
}
</script>
