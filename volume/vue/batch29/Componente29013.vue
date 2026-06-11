<template>
  <section class="panel-29013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29013");
const base = ref(29013);
const total = computed(() => base.value * 2);

function incrementar29013() {
  base.value++;
}
</script>
