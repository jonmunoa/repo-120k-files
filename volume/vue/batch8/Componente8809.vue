<template>
  <section class="panel-8809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8809");
const base = ref(8809);
const total = computed(() => base.value * 2);

function incrementar8809() {
  base.value++;
}
</script>
