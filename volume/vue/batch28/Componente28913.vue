<template>
  <section class="panel-28913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28913");
const base = ref(28913);
const total = computed(() => base.value * 2);

function incrementar28913() {
  base.value++;
}
</script>
