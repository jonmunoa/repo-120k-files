<template>
  <section class="panel-33929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33929");
const base = ref(33929);
const total = computed(() => base.value * 2);

function incrementar33929() {
  base.value++;
}
</script>
