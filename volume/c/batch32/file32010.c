// fichero 32010 -- macros y constantes
#define LIMITE_32010 32110
#define FACTOR_32010 1

int aplicar_limite32010(int valor) {
    if (valor > LIMITE_32010) return LIMITE_32010;
    return valor * FACTOR_32010;
}
