<template>
  <section class="panel-16101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16101");
const base = ref(16101);
const total = computed(() => base.value * 2);

function incrementar16101() {
  base.value++;
}
</script>
