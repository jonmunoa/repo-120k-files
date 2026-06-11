<template>
  <section class="panel-14853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14853");
const base = ref(14853);
const total = computed(() => base.value * 2);

function incrementar14853() {
  base.value++;
}
</script>
