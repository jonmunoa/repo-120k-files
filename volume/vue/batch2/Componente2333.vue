<template>
  <section class="panel-2333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2333");
const base = ref(2333);
const total = computed(() => base.value * 2);

function incrementar2333() {
  base.value++;
}
</script>
