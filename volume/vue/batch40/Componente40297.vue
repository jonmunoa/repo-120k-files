<template>
  <section class="panel-40297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40297");
const base = ref(40297);
const total = computed(() => base.value * 2);

function incrementar40297() {
  base.value++;
}
</script>
