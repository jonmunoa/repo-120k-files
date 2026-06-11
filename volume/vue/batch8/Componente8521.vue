<template>
  <section class="panel-8521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8521");
const base = ref(8521);
const total = computed(() => base.value * 2);

function incrementar8521() {
  base.value++;
}
</script>
