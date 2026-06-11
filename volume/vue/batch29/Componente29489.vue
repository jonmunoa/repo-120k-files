<template>
  <section class="panel-29489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29489");
const base = ref(29489);
const total = computed(() => base.value * 2);

function incrementar29489() {
  base.value++;
}
</script>
