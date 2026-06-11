<template>
  <section class="panel-57813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57813");
const base = ref(57813);
const total = computed(() => base.value * 2);

function incrementar57813() {
  base.value++;
}
</script>
