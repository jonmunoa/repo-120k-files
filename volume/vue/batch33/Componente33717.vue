<template>
  <section class="panel-33717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33717");
const base = ref(33717);
const total = computed(() => base.value * 2);

function incrementar33717() {
  base.value++;
}
</script>
