<template>
  <section class="panel-34777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34777");
const base = ref(34777);
const total = computed(() => base.value * 2);

function incrementar34777() {
  base.value++;
}
</script>
