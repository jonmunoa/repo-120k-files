<template>
  <section class="panel-25637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25637");
const base = ref(25637);
const total = computed(() => base.value * 2);

function incrementar25637() {
  base.value++;
}
</script>
