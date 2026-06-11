<template>
  <section class="panel-28113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28113");
const base = ref(28113);
const total = computed(() => base.value * 2);

function incrementar28113() {
  base.value++;
}
</script>
