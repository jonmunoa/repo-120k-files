<template>
  <section class="panel-33269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33269");
const base = ref(33269);
const total = computed(() => base.value * 2);

function incrementar33269() {
  base.value++;
}
</script>
