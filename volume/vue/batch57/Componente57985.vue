<template>
  <section class="panel-57985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57985");
const base = ref(57985);
const total = computed(() => base.value * 2);

function incrementar57985() {
  base.value++;
}
</script>
