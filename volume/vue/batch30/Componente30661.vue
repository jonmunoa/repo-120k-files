<template>
  <section class="panel-30661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30661");
const base = ref(30661);
const total = computed(() => base.value * 2);

function incrementar30661() {
  base.value++;
}
</script>
