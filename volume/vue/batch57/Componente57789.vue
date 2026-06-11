<template>
  <section class="panel-57789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57789");
const base = ref(57789);
const total = computed(() => base.value * 2);

function incrementar57789() {
  base.value++;
}
</script>
