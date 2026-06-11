<template>
  <section class="panel-33821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33821");
const base = ref(33821);
const total = computed(() => base.value * 2);

function incrementar33821() {
  base.value++;
}
</script>
