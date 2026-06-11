<template>
  <section class="panel-35365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35365");
const base = ref(35365);
const total = computed(() => base.value * 2);

function incrementar35365() {
  base.value++;
}
</script>
