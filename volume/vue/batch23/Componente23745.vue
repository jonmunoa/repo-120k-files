<template>
  <section class="panel-23745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23745");
const base = ref(23745);
const total = computed(() => base.value * 2);

function incrementar23745() {
  base.value++;
}
</script>
