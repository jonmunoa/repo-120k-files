<template>
  <section class="panel-57777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57777");
const base = ref(57777);
const total = computed(() => base.value * 2);

function incrementar57777() {
  base.value++;
}
</script>
