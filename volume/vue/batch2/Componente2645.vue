<template>
  <section class="panel-2645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2645");
const base = ref(2645);
const total = computed(() => base.value * 2);

function incrementar2645() {
  base.value++;
}
</script>
