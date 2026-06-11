<template>
  <section class="panel-19017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19017");
const base = ref(19017);
const total = computed(() => base.value * 2);

function incrementar19017() {
  base.value++;
}
</script>
