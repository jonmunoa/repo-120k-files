<template>
  <section class="panel-11917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11917");
const base = ref(11917);
const total = computed(() => base.value * 2);

function incrementar11917() {
  base.value++;
}
</script>
