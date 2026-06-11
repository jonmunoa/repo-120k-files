<template>
  <section class="panel-10449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10449");
const base = ref(10449);
const total = computed(() => base.value * 2);

function incrementar10449() {
  base.value++;
}
</script>
