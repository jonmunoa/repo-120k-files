<template>
  <section class="panel-47317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47317");
const base = ref(47317);
const total = computed(() => base.value * 2);

function incrementar47317() {
  base.value++;
}
</script>
