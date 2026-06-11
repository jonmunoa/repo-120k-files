<template>
  <section class="panel-27669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27669");
const base = ref(27669);
const total = computed(() => base.value * 2);

function incrementar27669() {
  base.value++;
}
</script>
