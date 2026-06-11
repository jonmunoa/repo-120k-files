<template>
  <section class="panel-25717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25717");
const base = ref(25717);
const total = computed(() => base.value * 2);

function incrementar25717() {
  base.value++;
}
</script>
