<template>
  <section class="panel-57945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57945");
const base = ref(57945);
const total = computed(() => base.value * 2);

function incrementar57945() {
  base.value++;
}
</script>
