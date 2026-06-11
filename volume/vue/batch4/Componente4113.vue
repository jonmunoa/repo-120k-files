<template>
  <section class="panel-4113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4113");
const base = ref(4113);
const total = computed(() => base.value * 2);

function incrementar4113() {
  base.value++;
}
</script>
