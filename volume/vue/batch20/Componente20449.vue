<template>
  <section class="panel-20449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20449");
const base = ref(20449);
const total = computed(() => base.value * 2);

function incrementar20449() {
  base.value++;
}
</script>
