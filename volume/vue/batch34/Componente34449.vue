<template>
  <section class="panel-34449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34449");
const base = ref(34449);
const total = computed(() => base.value * 2);

function incrementar34449() {
  base.value++;
}
</script>
