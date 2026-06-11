<template>
  <section class="panel-41333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41333");
const base = ref(41333);
const total = computed(() => base.value * 2);

function incrementar41333() {
  base.value++;
}
</script>
