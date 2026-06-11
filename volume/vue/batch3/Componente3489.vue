<template>
  <section class="panel-3489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3489");
const base = ref(3489);
const total = computed(() => base.value * 2);

function incrementar3489() {
  base.value++;
}
</script>
