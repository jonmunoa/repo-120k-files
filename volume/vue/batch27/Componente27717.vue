<template>
  <section class="panel-27717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27717");
const base = ref(27717);
const total = computed(() => base.value * 2);

function incrementar27717() {
  base.value++;
}
</script>
