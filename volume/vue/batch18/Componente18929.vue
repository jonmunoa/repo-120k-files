<template>
  <section class="panel-18929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18929");
const base = ref(18929);
const total = computed(() => base.value * 2);

function incrementar18929() {
  base.value++;
}
</script>
