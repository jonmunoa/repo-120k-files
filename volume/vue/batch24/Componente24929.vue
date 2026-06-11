<template>
  <section class="panel-24929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24929");
const base = ref(24929);
const total = computed(() => base.value * 2);

function incrementar24929() {
  base.value++;
}
</script>
