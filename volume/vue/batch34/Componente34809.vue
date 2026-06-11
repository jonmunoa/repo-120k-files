<template>
  <section class="panel-34809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34809");
const base = ref(34809);
const total = computed(() => base.value * 2);

function incrementar34809() {
  base.value++;
}
</script>
