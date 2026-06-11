<template>
  <section class="panel-9745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9745");
const base = ref(9745);
const total = computed(() => base.value * 2);

function incrementar9745() {
  base.value++;
}
</script>
