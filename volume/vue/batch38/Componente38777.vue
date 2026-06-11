<template>
  <section class="panel-38777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38777");
const base = ref(38777);
const total = computed(() => base.value * 2);

function incrementar38777() {
  base.value++;
}
</script>
