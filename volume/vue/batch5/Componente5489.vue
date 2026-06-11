<template>
  <section class="panel-5489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5489");
const base = ref(5489);
const total = computed(() => base.value * 2);

function incrementar5489() {
  base.value++;
}
</script>
