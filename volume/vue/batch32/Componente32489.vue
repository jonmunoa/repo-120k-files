<template>
  <section class="panel-32489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32489");
const base = ref(32489);
const total = computed(() => base.value * 2);

function incrementar32489() {
  base.value++;
}
</script>
