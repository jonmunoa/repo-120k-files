<template>
  <section class="panel-47929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47929");
const base = ref(47929);
const total = computed(() => base.value * 2);

function incrementar47929() {
  base.value++;
}
</script>
