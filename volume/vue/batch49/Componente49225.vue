<template>
  <section class="panel-49225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49225");
const base = ref(49225);
const total = computed(() => base.value * 2);

function incrementar49225() {
  base.value++;
}
</script>
