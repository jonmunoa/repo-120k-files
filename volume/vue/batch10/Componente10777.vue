<template>
  <section class="panel-10777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10777");
const base = ref(10777);
const total = computed(() => base.value * 2);

function incrementar10777() {
  base.value++;
}
</script>
