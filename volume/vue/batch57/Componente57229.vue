<template>
  <section class="panel-57229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57229");
const base = ref(57229);
const total = computed(() => base.value * 2);

function incrementar57229() {
  base.value++;
}
</script>
