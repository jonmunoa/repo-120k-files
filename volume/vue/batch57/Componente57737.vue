<template>
  <section class="panel-57737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57737");
const base = ref(57737);
const total = computed(() => base.value * 2);

function incrementar57737() {
  base.value++;
}
</script>
