<template>
  <section class="panel-57245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57245");
const base = ref(57245);
const total = computed(() => base.value * 2);

function incrementar57245() {
  base.value++;
}
</script>
