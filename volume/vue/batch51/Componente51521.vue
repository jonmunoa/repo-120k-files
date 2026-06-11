<template>
  <section class="panel-51521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51521");
const base = ref(51521);
const total = computed(() => base.value * 2);

function incrementar51521() {
  base.value++;
}
</script>
