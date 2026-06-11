<template>
  <section class="panel-33489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33489");
const base = ref(33489);
const total = computed(() => base.value * 2);

function incrementar33489() {
  base.value++;
}
</script>
