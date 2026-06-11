<template>
  <section class="panel-1205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1205");
const base = ref(1205);
const total = computed(() => base.value * 2);

function incrementar1205() {
  base.value++;
}
</script>
