<template>
  <section class="panel-57105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57105");
const base = ref(57105);
const total = computed(() => base.value * 2);

function incrementar57105() {
  base.value++;
}
</script>
