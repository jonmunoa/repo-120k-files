<template>
  <section class="panel-22941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22941");
const base = ref(22941);
const total = computed(() => base.value * 2);

function incrementar22941() {
  base.value++;
}
</script>
