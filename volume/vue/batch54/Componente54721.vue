<template>
  <section class="panel-54721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54721");
const base = ref(54721);
const total = computed(() => base.value * 2);

function incrementar54721() {
  base.value++;
}
</script>
