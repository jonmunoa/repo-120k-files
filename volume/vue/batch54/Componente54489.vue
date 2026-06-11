<template>
  <section class="panel-54489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54489");
const base = ref(54489);
const total = computed(() => base.value * 2);

function incrementar54489() {
  base.value++;
}
</script>
