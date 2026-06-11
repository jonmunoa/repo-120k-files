<template>
  <section class="panel-55713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55713");
const base = ref(55713);
const total = computed(() => base.value * 2);

function incrementar55713() {
  base.value++;
}
</script>
