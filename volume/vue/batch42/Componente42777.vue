<template>
  <section class="panel-42777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42777");
const base = ref(42777);
const total = computed(() => base.value * 2);

function incrementar42777() {
  base.value++;
}
</script>
