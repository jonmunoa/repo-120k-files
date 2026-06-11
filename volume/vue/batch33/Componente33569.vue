<template>
  <section class="panel-33569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33569");
const base = ref(33569);
const total = computed(() => base.value * 2);

function incrementar33569() {
  base.value++;
}
</script>
