<template>
  <section class="panel-2225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2225");
const base = ref(2225);
const total = computed(() => base.value * 2);

function incrementar2225() {
  base.value++;
}
</script>
