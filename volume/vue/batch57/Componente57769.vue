<template>
  <section class="panel-57769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57769");
const base = ref(57769);
const total = computed(() => base.value * 2);

function incrementar57769() {
  base.value++;
}
</script>
