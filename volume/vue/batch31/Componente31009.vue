<template>
  <section class="panel-31009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31009");
const base = ref(31009);
const total = computed(() => base.value * 2);

function incrementar31009() {
  base.value++;
}
</script>
