<template>
  <section class="panel-31809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31809");
const base = ref(31809);
const total = computed(() => base.value * 2);

function incrementar31809() {
  base.value++;
}
</script>
