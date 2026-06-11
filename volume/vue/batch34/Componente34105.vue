<template>
  <section class="panel-34105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34105");
const base = ref(34105);
const total = computed(() => base.value * 2);

function incrementar34105() {
  base.value++;
}
</script>
