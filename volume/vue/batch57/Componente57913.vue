<template>
  <section class="panel-57913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57913");
const base = ref(57913);
const total = computed(() => base.value * 2);

function incrementar57913() {
  base.value++;
}
</script>
