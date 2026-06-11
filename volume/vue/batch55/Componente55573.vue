<template>
  <section class="panel-55573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55573");
const base = ref(55573);
const total = computed(() => base.value * 2);

function incrementar55573() {
  base.value++;
}
</script>
