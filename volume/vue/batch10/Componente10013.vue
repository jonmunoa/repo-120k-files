<template>
  <section class="panel-10013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10013");
const base = ref(10013);
const total = computed(() => base.value * 2);

function incrementar10013() {
  base.value++;
}
</script>
