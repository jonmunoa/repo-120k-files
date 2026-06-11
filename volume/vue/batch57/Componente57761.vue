<template>
  <section class="panel-57761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57761");
const base = ref(57761);
const total = computed(() => base.value * 2);

function incrementar57761() {
  base.value++;
}
</script>
