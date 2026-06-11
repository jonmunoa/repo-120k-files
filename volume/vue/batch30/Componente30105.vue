<template>
  <section class="panel-30105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30105");
const base = ref(30105);
const total = computed(() => base.value * 2);

function incrementar30105() {
  base.value++;
}
</script>
