<template>
  <section class="panel-53929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53929");
const base = ref(53929);
const total = computed(() => base.value * 2);

function incrementar53929() {
  base.value++;
}
</script>
