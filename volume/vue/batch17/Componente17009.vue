<template>
  <section class="panel-17009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17009");
const base = ref(17009);
const total = computed(() => base.value * 2);

function incrementar17009() {
  base.value++;
}
</script>
