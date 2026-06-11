<template>
  <section class="panel-25965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25965");
const base = ref(25965);
const total = computed(() => base.value * 2);

function incrementar25965() {
  base.value++;
}
</script>
