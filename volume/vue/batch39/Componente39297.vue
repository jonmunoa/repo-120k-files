<template>
  <section class="panel-39297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39297");
const base = ref(39297);
const total = computed(() => base.value * 2);

function incrementar39297() {
  base.value++;
}
</script>
