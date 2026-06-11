<template>
  <section class="panel-20329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20329");
const base = ref(20329);
const total = computed(() => base.value * 2);

function incrementar20329() {
  base.value++;
}
</script>
