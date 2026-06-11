<template>
  <section class="panel-17717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17717");
const base = ref(17717);
const total = computed(() => base.value * 2);

function incrementar17717() {
  base.value++;
}
</script>
