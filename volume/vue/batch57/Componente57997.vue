<template>
  <section class="panel-57997">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57997");
const base = ref(57997);
const total = computed(() => base.value * 2);

function incrementar57997() {
  base.value++;
}
</script>
