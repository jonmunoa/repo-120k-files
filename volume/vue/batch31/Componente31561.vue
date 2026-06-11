<template>
  <section class="panel-31561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31561");
const base = ref(31561);
const total = computed(() => base.value * 2);

function incrementar31561() {
  base.value++;
}
</script>
