<template>
  <section class="panel-57217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57217");
const base = ref(57217);
const total = computed(() => base.value * 2);

function incrementar57217() {
  base.value++;
}
</script>
