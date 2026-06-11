<template>
  <section class="panel-25645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25645");
const base = ref(25645);
const total = computed(() => base.value * 2);

function incrementar25645() {
  base.value++;
}
</script>
