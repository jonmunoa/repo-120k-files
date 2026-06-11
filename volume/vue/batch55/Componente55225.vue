<template>
  <section class="panel-55225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55225");
const base = ref(55225);
const total = computed(() => base.value * 2);

function incrementar55225() {
  base.value++;
}
</script>
