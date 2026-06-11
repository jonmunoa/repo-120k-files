<template>
  <section class="panel-27825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27825");
const base = ref(27825);
const total = computed(() => base.value * 2);

function incrementar27825() {
  base.value++;
}
</script>
