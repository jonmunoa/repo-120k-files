<template>
  <section class="panel-27181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27181");
const base = ref(27181);
const total = computed(() => base.value * 2);

function incrementar27181() {
  base.value++;
}
</script>
