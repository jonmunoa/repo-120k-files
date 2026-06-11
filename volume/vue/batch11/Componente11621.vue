<template>
  <section class="panel-11621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11621");
const base = ref(11621);
const total = computed(() => base.value * 2);

function incrementar11621() {
  base.value++;
}
</script>
