<template>
  <section class="panel-25009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25009");
const base = ref(25009);
const total = computed(() => base.value * 2);

function incrementar25009() {
  base.value++;
}
</script>
