<template>
  <section class="panel-53217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53217");
const base = ref(53217);
const total = computed(() => base.value * 2);

function incrementar53217() {
  base.value++;
}
</script>
