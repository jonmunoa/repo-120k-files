<template>
  <section class="panel-28773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28773");
const base = ref(28773);
const total = computed(() => base.value * 2);

function incrementar28773() {
  base.value++;
}
</script>
