<template>
  <section class="panel-36001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36001");
const base = ref(36001);
const total = computed(() => base.value * 2);

function incrementar36001() {
  base.value++;
}
</script>
