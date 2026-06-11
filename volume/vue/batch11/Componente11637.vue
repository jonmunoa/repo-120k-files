<template>
  <section class="panel-11637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11637");
const base = ref(11637);
const total = computed(() => base.value * 2);

function incrementar11637() {
  base.value++;
}
</script>
