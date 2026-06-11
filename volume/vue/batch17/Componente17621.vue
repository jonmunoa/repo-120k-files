<template>
  <section class="panel-17621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17621");
const base = ref(17621);
const total = computed(() => base.value * 2);

function incrementar17621() {
  base.value++;
}
</script>
