<template>
  <section class="panel-48621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48621");
const base = ref(48621);
const total = computed(() => base.value * 2);

function incrementar48621() {
  base.value++;
}
</script>
