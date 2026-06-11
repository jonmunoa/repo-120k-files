<template>
  <section class="panel-57825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57825");
const base = ref(57825);
const total = computed(() => base.value * 2);

function incrementar57825() {
  base.value++;
}
</script>
