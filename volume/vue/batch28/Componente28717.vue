<template>
  <section class="panel-28717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28717");
const base = ref(28717);
const total = computed(() => base.value * 2);

function incrementar28717() {
  base.value++;
}
</script>
