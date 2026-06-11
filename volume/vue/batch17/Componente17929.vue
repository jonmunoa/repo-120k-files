<template>
  <section class="panel-17929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17929");
const base = ref(17929);
const total = computed(() => base.value * 2);

function incrementar17929() {
  base.value++;
}
</script>
