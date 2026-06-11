<template>
  <section class="panel-777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 777");
const base = ref(777);
const total = computed(() => base.value * 2);

function incrementar777() {
  base.value++;
}
</script>
