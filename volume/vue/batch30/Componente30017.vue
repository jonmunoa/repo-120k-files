<template>
  <section class="panel-30017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30017");
const base = ref(30017);
const total = computed(() => base.value * 2);

function incrementar30017() {
  base.value++;
}
</script>
