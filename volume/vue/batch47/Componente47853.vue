<template>
  <section class="panel-47853">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47853");
const base = ref(47853);
const total = computed(() => base.value * 2);

function incrementar47853() {
  base.value++;
}
</script>
