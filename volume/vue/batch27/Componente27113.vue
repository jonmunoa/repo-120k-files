<template>
  <section class="panel-27113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27113");
const base = ref(27113);
const total = computed(() => base.value * 2);

function incrementar27113() {
  base.value++;
}
</script>
