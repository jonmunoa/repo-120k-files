<template>
  <section class="panel-33901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33901");
const base = ref(33901);
const total = computed(() => base.value * 2);

function incrementar33901() {
  base.value++;
}
</script>
