<template>
  <section class="panel-30777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30777");
const base = ref(30777);
const total = computed(() => base.value * 2);

function incrementar30777() {
  base.value++;
}
</script>
