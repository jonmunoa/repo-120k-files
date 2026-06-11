<template>
  <section class="panel-57393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57393");
const base = ref(57393);
const total = computed(() => base.value * 2);

function incrementar57393() {
  base.value++;
}
</script>
