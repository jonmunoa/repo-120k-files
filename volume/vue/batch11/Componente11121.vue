<template>
  <section class="panel-11121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11121");
const base = ref(11121);
const total = computed(() => base.value * 2);

function incrementar11121() {
  base.value++;
}
</script>
