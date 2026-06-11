<template>
  <section class="panel-13717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13717");
const base = ref(13717);
const total = computed(() => base.value * 2);

function incrementar13717() {
  base.value++;
}
</script>
