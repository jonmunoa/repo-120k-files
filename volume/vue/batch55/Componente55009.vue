<template>
  <section class="panel-55009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55009");
const base = ref(55009);
const total = computed(() => base.value * 2);

function incrementar55009() {
  base.value++;
}
</script>
