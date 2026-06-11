<template>
  <section class="panel-31313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31313");
const base = ref(31313);
const total = computed(() => base.value * 2);

function incrementar31313() {
  base.value++;
}
</script>
