<template>
  <section class="panel-7557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7557");
const base = ref(7557);
const total = computed(() => base.value * 2);

function incrementar7557() {
  base.value++;
}
</script>
