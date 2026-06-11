<template>
  <section class="panel-41017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41017");
const base = ref(41017);
const total = computed(() => base.value * 2);

function incrementar41017() {
  base.value++;
}
</script>
