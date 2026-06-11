<template>
  <section class="panel-57645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57645");
const base = ref(57645);
const total = computed(() => base.value * 2);

function incrementar57645() {
  base.value++;
}
</script>
