<template>
  <section class="panel-21001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21001");
const base = ref(21001);
const total = computed(() => base.value * 2);

function incrementar21001() {
  base.value++;
}
</script>
