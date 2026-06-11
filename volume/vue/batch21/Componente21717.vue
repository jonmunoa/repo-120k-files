<template>
  <section class="panel-21717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21717");
const base = ref(21717);
const total = computed(() => base.value * 2);

function incrementar21717() {
  base.value++;
}
</script>
