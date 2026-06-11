<template>
  <section class="panel-49929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49929");
const base = ref(49929);
const total = computed(() => base.value * 2);

function incrementar49929() {
  base.value++;
}
</script>
