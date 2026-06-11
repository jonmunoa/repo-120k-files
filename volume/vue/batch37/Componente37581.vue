<template>
  <section class="panel-37581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37581");
const base = ref(37581);
const total = computed(() => base.value * 2);

function incrementar37581() {
  base.value++;
}
</script>
