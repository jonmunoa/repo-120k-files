<template>
  <section class="panel-18541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18541");
const base = ref(18541);
const total = computed(() => base.value * 2);

function incrementar18541() {
  base.value++;
}
</script>
