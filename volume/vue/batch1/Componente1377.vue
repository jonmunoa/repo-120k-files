<template>
  <section class="panel-1377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1377");
const base = ref(1377);
const total = computed(() => base.value * 2);

function incrementar1377() {
  base.value++;
}
</script>
