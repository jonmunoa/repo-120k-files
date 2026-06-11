<template>
  <section class="panel-34621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34621");
const base = ref(34621);
const total = computed(() => base.value * 2);

function incrementar34621() {
  base.value++;
}
</script>
