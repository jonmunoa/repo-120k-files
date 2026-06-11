<template>
  <section class="panel-49777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49777");
const base = ref(49777);
const total = computed(() => base.value * 2);

function incrementar49777() {
  base.value++;
}
</script>
