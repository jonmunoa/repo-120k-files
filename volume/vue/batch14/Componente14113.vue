<template>
  <section class="panel-14113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14113");
const base = ref(14113);
const total = computed(() => base.value * 2);

function incrementar14113() {
  base.value++;
}
</script>
