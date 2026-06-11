<template>
  <section class="panel-28225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28225");
const base = ref(28225);
const total = computed(() => base.value * 2);

function incrementar28225() {
  base.value++;
}
</script>
