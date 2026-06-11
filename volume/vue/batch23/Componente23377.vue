<template>
  <section class="panel-23377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23377");
const base = ref(23377);
const total = computed(() => base.value * 2);

function incrementar23377() {
  base.value++;
}
</script>
