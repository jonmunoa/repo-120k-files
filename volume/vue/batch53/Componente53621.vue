<template>
  <section class="panel-53621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53621");
const base = ref(53621);
const total = computed(() => base.value * 2);

function incrementar53621() {
  base.value++;
}
</script>
