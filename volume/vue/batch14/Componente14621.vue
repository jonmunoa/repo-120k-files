<template>
  <section class="panel-14621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14621");
const base = ref(14621);
const total = computed(() => base.value * 2);

function incrementar14621() {
  base.value++;
}
</script>
