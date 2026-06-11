<template>
  <section class="panel-52621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52621");
const base = ref(52621);
const total = computed(() => base.value * 2);

function incrementar52621() {
  base.value++;
}
</script>
