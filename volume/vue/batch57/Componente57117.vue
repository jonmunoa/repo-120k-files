<template>
  <section class="panel-57117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57117");
const base = ref(57117);
const total = computed(() => base.value * 2);

function incrementar57117() {
  base.value++;
}
</script>
