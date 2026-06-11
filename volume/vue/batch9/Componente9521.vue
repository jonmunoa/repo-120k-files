<template>
  <section class="panel-9521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9521");
const base = ref(9521);
const total = computed(() => base.value * 2);

function incrementar9521() {
  base.value++;
}
</script>
