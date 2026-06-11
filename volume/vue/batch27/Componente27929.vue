<template>
  <section class="panel-27929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27929");
const base = ref(27929);
const total = computed(() => base.value * 2);

function incrementar27929() {
  base.value++;
}
</script>
