<template>
  <section class="panel-51049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51049");
const base = ref(51049);
const total = computed(() => base.value * 2);

function incrementar51049() {
  base.value++;
}
</script>
