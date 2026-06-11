<template>
  <section class="panel-57009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57009");
const base = ref(57009);
const total = computed(() => base.value * 2);

function incrementar57009() {
  base.value++;
}
</script>
