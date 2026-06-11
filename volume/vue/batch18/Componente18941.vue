<template>
  <section class="panel-18941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18941");
const base = ref(18941);
const total = computed(() => base.value * 2);

function incrementar18941() {
  base.value++;
}
</script>
