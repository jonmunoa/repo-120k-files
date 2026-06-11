<template>
  <section class="panel-16013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16013");
const base = ref(16013);
const total = computed(() => base.value * 2);

function incrementar16013() {
  base.value++;
}
</script>
