<template>
  <section class="panel-50777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50777");
const base = ref(50777);
const total = computed(() => base.value * 2);

function incrementar50777() {
  base.value++;
}
</script>
