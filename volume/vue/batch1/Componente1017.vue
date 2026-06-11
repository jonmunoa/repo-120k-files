<template>
  <section class="panel-1017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1017");
const base = ref(1017);
const total = computed(() => base.value * 2);

function incrementar1017() {
  base.value++;
}
</script>
