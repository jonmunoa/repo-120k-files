<template>
  <section class="panel-35569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35569");
const base = ref(35569);
const total = computed(() => base.value * 2);

function incrementar35569() {
  base.value++;
}
</script>
