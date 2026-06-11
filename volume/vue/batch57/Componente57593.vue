<template>
  <section class="panel-57593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57593");
const base = ref(57593);
const total = computed(() => base.value * 2);

function incrementar57593() {
  base.value++;
}
</script>
