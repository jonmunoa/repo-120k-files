<template>
  <section class="panel-25229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25229");
const base = ref(25229);
const total = computed(() => base.value * 2);

function incrementar25229() {
  base.value++;
}
</script>
