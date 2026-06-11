<template>
  <section class="panel-47917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47917");
const base = ref(47917);
const total = computed(() => base.value * 2);

function incrementar47917() {
  base.value++;
}
</script>
