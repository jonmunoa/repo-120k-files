<template>
  <section class="panel-40449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40449");
const base = ref(40449);
const total = computed(() => base.value * 2);

function incrementar40449() {
  base.value++;
}
</script>
