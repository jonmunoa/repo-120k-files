<template>
  <section class="panel-31449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31449");
const base = ref(31449);
const total = computed(() => base.value * 2);

function incrementar31449() {
  base.value++;
}
</script>
