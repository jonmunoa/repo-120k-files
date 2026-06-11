<template>
  <section class="panel-57705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57705");
const base = ref(57705);
const total = computed(() => base.value * 2);

function incrementar57705() {
  base.value++;
}
</script>
