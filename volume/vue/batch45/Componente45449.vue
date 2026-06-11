<template>
  <section class="panel-45449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45449");
const base = ref(45449);
const total = computed(() => base.value * 2);

function incrementar45449() {
  base.value++;
}
</script>
