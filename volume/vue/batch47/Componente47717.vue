<template>
  <section class="panel-47717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47717");
const base = ref(47717);
const total = computed(() => base.value * 2);

function incrementar47717() {
  base.value++;
}
</script>
