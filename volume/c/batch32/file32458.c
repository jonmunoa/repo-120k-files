// fichero 32458 -- macros y constantes
#define LIMITE_32458 32558
#define FACTOR_32458 4

int aplicar_limite32458(int valor) {
    if (valor > LIMITE_32458) return LIMITE_32458;
    return valor * FACTOR_32458;
}
