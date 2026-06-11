<template>
  <section class="panel-809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 809");
const base = ref(809);
const total = computed(() => base.value * 2);

function incrementar809() {
  base.value++;
}
</script>
