<template>
  <section class="panel-57713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57713");
const base = ref(57713);
const total = computed(() => base.value * 2);

function incrementar57713() {
  base.value++;
}
</script>
