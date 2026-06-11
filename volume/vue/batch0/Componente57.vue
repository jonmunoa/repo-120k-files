<template>
  <section class="panel-57">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57");
const base = ref(57);
const total = computed(() => base.value * 2);

function incrementar57() {
  base.value++;
}
</script>
