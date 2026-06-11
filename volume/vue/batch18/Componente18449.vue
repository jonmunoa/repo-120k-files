<template>
  <section class="panel-18449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18449");
const base = ref(18449);
const total = computed(() => base.value * 2);

function incrementar18449() {
  base.value++;
}
</script>
