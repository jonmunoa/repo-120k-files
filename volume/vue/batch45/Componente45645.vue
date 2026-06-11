<template>
  <section class="panel-45645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45645");
const base = ref(45645);
const total = computed(() => base.value * 2);

function incrementar45645() {
  base.value++;
}
</script>
