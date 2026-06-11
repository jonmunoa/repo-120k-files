<template>
  <section class="panel-7205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7205");
const base = ref(7205);
const total = computed(() => base.value * 2);

function incrementar7205() {
  base.value++;
}
</script>
