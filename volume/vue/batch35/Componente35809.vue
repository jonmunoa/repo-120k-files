<template>
  <section class="panel-35809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35809");
const base = ref(35809);
const total = computed(() => base.value * 2);

function incrementar35809() {
  base.value++;
}
</script>
