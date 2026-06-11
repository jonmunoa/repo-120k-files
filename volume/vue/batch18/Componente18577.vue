<template>
  <section class="panel-18577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18577");
const base = ref(18577);
const total = computed(() => base.value * 2);

function incrementar18577() {
  base.value++;
}
</script>
