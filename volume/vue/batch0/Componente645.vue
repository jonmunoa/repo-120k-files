<template>
  <section class="panel-645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 645");
const base = ref(645);
const total = computed(() => base.value * 2);

function incrementar645() {
  base.value++;
}
</script>
