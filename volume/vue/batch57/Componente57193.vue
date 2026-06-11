<template>
  <section class="panel-57193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57193");
const base = ref(57193);
const total = computed(() => base.value * 2);

function incrementar57193() {
  base.value++;
}
</script>
