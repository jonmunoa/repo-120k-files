<template>
  <section class="panel-40329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40329");
const base = ref(40329);
const total = computed(() => base.value * 2);

function incrementar40329() {
  base.value++;
}
</script>
