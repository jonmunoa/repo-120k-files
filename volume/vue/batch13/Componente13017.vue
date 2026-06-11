<template>
  <section class="panel-13017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13017");
const base = ref(13017);
const total = computed(() => base.value * 2);

function incrementar13017() {
  base.value++;
}
</script>
