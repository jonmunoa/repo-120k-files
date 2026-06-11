<template>
  <section class="panel-23205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23205");
const base = ref(23205);
const total = computed(() => base.value * 2);

function incrementar23205() {
  base.value++;
}
</script>
