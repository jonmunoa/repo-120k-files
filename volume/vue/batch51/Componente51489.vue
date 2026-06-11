<template>
  <section class="panel-51489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51489");
const base = ref(51489);
const total = computed(() => base.value * 2);

function incrementar51489() {
  base.value++;
}
</script>
