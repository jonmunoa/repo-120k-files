<template>
  <section class="panel-52013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52013");
const base = ref(52013);
const total = computed(() => base.value * 2);

function incrementar52013() {
  base.value++;
}
</script>
