<template>
  <section class="panel-55177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55177");
const base = ref(55177);
const total = computed(() => base.value * 2);

function incrementar55177() {
  base.value++;
}
</script>
