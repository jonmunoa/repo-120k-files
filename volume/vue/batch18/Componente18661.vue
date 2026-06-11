<template>
  <section class="panel-18661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18661");
const base = ref(18661);
const total = computed(() => base.value * 2);

function incrementar18661() {
  base.value++;
}
</script>
