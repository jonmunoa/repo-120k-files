<template>
  <section class="panel-22209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22209");
const base = ref(22209);
const total = computed(() => base.value * 2);

function incrementar22209() {
  base.value++;
}
</script>
