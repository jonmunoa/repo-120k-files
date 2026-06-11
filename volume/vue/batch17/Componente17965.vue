<template>
  <section class="panel-17965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17965");
const base = ref(17965);
const total = computed(() => base.value * 2);

function incrementar17965() {
  base.value++;
}
</script>
