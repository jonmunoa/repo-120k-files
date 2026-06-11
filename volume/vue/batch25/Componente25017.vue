<template>
  <section class="panel-25017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25017");
const base = ref(25017);
const total = computed(() => base.value * 2);

function incrementar25017() {
  base.value++;
}
</script>
