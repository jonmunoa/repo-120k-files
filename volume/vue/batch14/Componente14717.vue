<template>
  <section class="panel-14717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14717");
const base = ref(14717);
const total = computed(() => base.value * 2);

function incrementar14717() {
  base.value++;
}
</script>
