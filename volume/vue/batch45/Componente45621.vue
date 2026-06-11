<template>
  <section class="panel-45621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45621");
const base = ref(45621);
const total = computed(() => base.value * 2);

function incrementar45621() {
  base.value++;
}
</script>
