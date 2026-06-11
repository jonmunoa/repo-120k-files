<template>
  <section class="panel-54993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54993");
const base = ref(54993);
const total = computed(() => base.value * 2);

function incrementar54993() {
  base.value++;
}
</script>
