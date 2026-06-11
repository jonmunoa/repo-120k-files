<template>
  <section class="panel-28929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28929");
const base = ref(28929);
const total = computed(() => base.value * 2);

function incrementar28929() {
  base.value++;
}
</script>
