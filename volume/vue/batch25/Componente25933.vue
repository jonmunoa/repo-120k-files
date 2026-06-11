<template>
  <section class="panel-25933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25933");
const base = ref(25933);
const total = computed(() => base.value * 2);

function incrementar25933() {
  base.value++;
}
</script>
