<template>
  <section class="panel-5181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5181");
const base = ref(5181);
const total = computed(() => base.value * 2);

function incrementar5181() {
  base.value++;
}
</script>
