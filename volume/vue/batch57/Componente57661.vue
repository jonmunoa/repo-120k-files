<template>
  <section class="panel-57661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57661");
const base = ref(57661);
const total = computed(() => base.value * 2);

function incrementar57661() {
  base.value++;
}
</script>
