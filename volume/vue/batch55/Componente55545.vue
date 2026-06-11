<template>
  <section class="panel-55545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55545");
const base = ref(55545);
const total = computed(() => base.value * 2);

function incrementar55545() {
  base.value++;
}
</script>
