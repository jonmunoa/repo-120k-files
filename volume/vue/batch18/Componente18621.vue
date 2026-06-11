<template>
  <section class="panel-18621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18621");
const base = ref(18621);
const total = computed(() => base.value * 2);

function incrementar18621() {
  base.value++;
}
</script>
