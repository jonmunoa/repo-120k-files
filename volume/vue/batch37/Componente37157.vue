<template>
  <section class="panel-37157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37157");
const base = ref(37157);
const total = computed(() => base.value * 2);

function incrementar37157() {
  base.value++;
}
</script>
