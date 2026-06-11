<template>
  <section class="panel-56133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56133");
const base = ref(56133);
const total = computed(() => base.value * 2);

function incrementar56133() {
  base.value++;
}
</script>
