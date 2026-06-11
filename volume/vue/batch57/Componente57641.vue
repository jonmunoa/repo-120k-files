<template>
  <section class="panel-57641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57641");
const base = ref(57641);
const total = computed(() => base.value * 2);

function incrementar57641() {
  base.value++;
}
</script>
