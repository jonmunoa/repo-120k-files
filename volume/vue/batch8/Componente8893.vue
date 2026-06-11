<template>
  <section class="panel-8893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8893");
const base = ref(8893);
const total = computed(() => base.value * 2);

function incrementar8893() {
  base.value++;
}
</script>
