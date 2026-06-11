<template>
  <section class="panel-36101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36101");
const base = ref(36101);
const total = computed(() => base.value * 2);

function incrementar36101() {
  base.value++;
}
</script>
