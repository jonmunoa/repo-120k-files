<template>
  <section class="panel-41449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41449");
const base = ref(41449);
const total = computed(() => base.value * 2);

function incrementar41449() {
  base.value++;
}
</script>
