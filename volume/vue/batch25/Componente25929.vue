<template>
  <section class="panel-25929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25929");
const base = ref(25929);
const total = computed(() => base.value * 2);

function incrementar25929() {
  base.value++;
}
</script>
