<template>
  <section class="panel-10621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10621");
const base = ref(10621);
const total = computed(() => base.value * 2);

function incrementar10621() {
  base.value++;
}
</script>
