// fichero 27902 -- macros y constantes
#define LIMITE_27902 28002
#define FACTOR_27902 3

int aplicar_limite27902(int valor) {
    if (valor > LIMITE_27902) return LIMITE_27902;
    return valor * FACTOR_27902;
}
