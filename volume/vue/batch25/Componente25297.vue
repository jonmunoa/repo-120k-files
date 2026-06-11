<template>
  <section class="panel-25297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25297");
const base = ref(25297);
const total = computed(() => base.value * 2);

function incrementar25297() {
  base.value++;
}
</script>
