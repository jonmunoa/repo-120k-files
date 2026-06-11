<template>
  <section class="panel-48521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48521");
const base = ref(48521);
const total = computed(() => base.value * 2);

function incrementar48521() {
  base.value++;
}
</script>
