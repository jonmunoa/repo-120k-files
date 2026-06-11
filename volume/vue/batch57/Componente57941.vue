<template>
  <section class="panel-57941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57941");
const base = ref(57941);
const total = computed(() => base.value * 2);

function incrementar57941() {
  base.value++;
}
</script>
