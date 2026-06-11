<template>
  <section class="panel-57809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57809");
const base = ref(57809);
const total = computed(() => base.value * 2);

function incrementar57809() {
  base.value++;
}
</script>
