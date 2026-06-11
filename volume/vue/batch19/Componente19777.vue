<template>
  <section class="panel-19777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19777");
const base = ref(19777);
const total = computed(() => base.value * 2);

function incrementar19777() {
  base.value++;
}
</script>
