<template>
  <section class="panel-19717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19717");
const base = ref(19717);
const total = computed(() => base.value * 2);

function incrementar19717() {
  base.value++;
}
</script>
