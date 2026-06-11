<template>
  <section class="panel-39521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39521");
const base = ref(39521);
const total = computed(() => base.value * 2);

function incrementar39521() {
  base.value++;
}
</script>
