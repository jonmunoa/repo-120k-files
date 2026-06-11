<template>
  <section class="panel-11761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11761");
const base = ref(11761);
const total = computed(() => base.value * 2);

function incrementar11761() {
  base.value++;
}
</script>
