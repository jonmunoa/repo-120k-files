<template>
  <section class="panel-37685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37685");
const base = ref(37685);
const total = computed(() => base.value * 2);

function incrementar37685() {
  base.value++;
}
</script>
