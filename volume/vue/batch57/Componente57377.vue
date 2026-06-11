<template>
  <section class="panel-57377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57377");
const base = ref(57377);
const total = computed(() => base.value * 2);

function incrementar57377() {
  base.value++;
}
</script>
