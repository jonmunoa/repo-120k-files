<template>
  <section class="panel-30621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30621");
const base = ref(30621);
const total = computed(() => base.value * 2);

function incrementar30621() {
  base.value++;
}
</script>
