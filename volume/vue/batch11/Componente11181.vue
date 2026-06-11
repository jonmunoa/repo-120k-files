<template>
  <section class="panel-11181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11181");
const base = ref(11181);
const total = computed(() => base.value * 2);

function incrementar11181() {
  base.value++;
}
</script>
