<template>
  <section class="panel-33297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33297");
const base = ref(33297);
const total = computed(() => base.value * 2);

function incrementar33297() {
  base.value++;
}
</script>
