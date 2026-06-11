<template>
  <section class="panel-47617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47617");
const base = ref(47617);
const total = computed(() => base.value * 2);

function incrementar47617() {
  base.value++;
}
</script>
