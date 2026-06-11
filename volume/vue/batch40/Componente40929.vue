<template>
  <section class="panel-40929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40929");
const base = ref(40929);
const total = computed(() => base.value * 2);

function incrementar40929() {
  base.value++;
}
</script>
