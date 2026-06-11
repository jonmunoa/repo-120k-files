<template>
  <section class="panel-43929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43929");
const base = ref(43929);
const total = computed(() => base.value * 2);

function incrementar43929() {
  base.value++;
}
</script>
