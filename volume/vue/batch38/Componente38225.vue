<template>
  <section class="panel-38225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38225");
const base = ref(38225);
const total = computed(() => base.value * 2);

function incrementar38225() {
  base.value++;
}
</script>
