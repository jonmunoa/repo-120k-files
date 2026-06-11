<template>
  <section class="panel-19449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19449");
const base = ref(19449);
const total = computed(() => base.value * 2);

function incrementar19449() {
  base.value++;
}
</script>
