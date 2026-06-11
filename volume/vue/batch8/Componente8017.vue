<template>
  <section class="panel-8017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8017");
const base = ref(8017);
const total = computed(() => base.value * 2);

function incrementar8017() {
  base.value++;
}
</script>
