<template>
  <section class="panel-55065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55065");
const base = ref(55065);
const total = computed(() => base.value * 2);

function incrementar55065() {
  base.value++;
}
</script>
