<template>
  <section class="panel-8929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8929");
const base = ref(8929);
const total = computed(() => base.value * 2);

function incrementar8929() {
  base.value++;
}
</script>
