<template>
  <section class="panel-37809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37809");
const base = ref(37809);
const total = computed(() => base.value * 2);

function incrementar37809() {
  base.value++;
}
</script>
