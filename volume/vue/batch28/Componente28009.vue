<template>
  <section class="panel-28009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28009");
const base = ref(28009);
const total = computed(() => base.value * 2);

function incrementar28009() {
  base.value++;
}
</script>
