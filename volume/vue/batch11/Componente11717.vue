<template>
  <section class="panel-11717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11717");
const base = ref(11717);
const total = computed(() => base.value * 2);

function incrementar11717() {
  base.value++;
}
</script>
