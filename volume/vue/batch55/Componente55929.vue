<template>
  <section class="panel-55929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55929");
const base = ref(55929);
const total = computed(() => base.value * 2);

function incrementar55929() {
  base.value++;
}
</script>
