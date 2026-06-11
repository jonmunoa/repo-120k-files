<template>
  <section class="panel-33197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33197");
const base = ref(33197);
const total = computed(() => base.value * 2);

function incrementar33197() {
  base.value++;
}
</script>
