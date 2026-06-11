<template>
  <section class="panel-4777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4777");
const base = ref(4777);
const total = computed(() => base.value * 2);

function incrementar4777() {
  base.value++;
}
</script>
