<template>
  <section class="panel-521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 521");
const base = ref(521);
const total = computed(() => base.value * 2);

function incrementar521() {
  base.value++;
}
</script>
