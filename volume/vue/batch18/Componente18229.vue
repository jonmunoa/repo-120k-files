<template>
  <section class="panel-18229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18229");
const base = ref(18229);
const total = computed(() => base.value * 2);

function incrementar18229() {
  base.value++;
}
</script>
