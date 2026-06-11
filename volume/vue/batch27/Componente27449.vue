<template>
  <section class="panel-27449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27449");
const base = ref(27449);
const total = computed(() => base.value * 2);

function incrementar27449() {
  base.value++;
}
</script>
