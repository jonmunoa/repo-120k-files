<template>
  <section class="panel-57969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57969");
const base = ref(57969);
const total = computed(() => base.value * 2);

function incrementar57969() {
  base.value++;
}
</script>
