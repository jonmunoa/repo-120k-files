<template>
  <section class="panel-39001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39001");
const base = ref(39001);
const total = computed(() => base.value * 2);

function incrementar39001() {
  base.value++;
}
</script>
