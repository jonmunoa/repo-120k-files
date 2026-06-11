<template>
  <section class="panel-57721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57721");
const base = ref(57721);
const total = computed(() => base.value * 2);

function incrementar57721() {
  base.value++;
}
</script>
