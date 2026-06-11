<template>
  <section class="panel-7621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7621");
const base = ref(7621);
const total = computed(() => base.value * 2);

function incrementar7621() {
  base.value++;
}
</script>
