<template>
  <section class="panel-51745">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51745");
const base = ref(51745);
const total = computed(() => base.value * 2);

function incrementar51745() {
  base.value++;
}
</script>
