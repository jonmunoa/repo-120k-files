<template>
  <section class="panel-7717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7717");
const base = ref(7717);
const total = computed(() => base.value * 2);

function incrementar7717() {
  base.value++;
}
</script>
