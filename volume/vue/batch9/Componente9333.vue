<template>
  <section class="panel-9333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9333");
const base = ref(9333);
const total = computed(() => base.value * 2);

function incrementar9333() {
  base.value++;
}
</script>
