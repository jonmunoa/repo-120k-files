<template>
  <section class="panel-57185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57185");
const base = ref(57185);
const total = computed(() => base.value * 2);

function incrementar57185() {
  base.value++;
}
</script>
