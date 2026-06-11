<template>
  <section class="panel-28241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28241");
const base = ref(28241);
const total = computed(() => base.value * 2);

function incrementar28241() {
  base.value++;
}
</script>
