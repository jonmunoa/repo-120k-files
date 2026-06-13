// fichero 49002 -- macros y constantes
#define LIMITE_49002 49102
#define FACTOR_49002 3

int aplicar_limite49002(int valor) {
    if (valor > LIMITE_49002) return LIMITE_49002;
    return valor * FACTOR_49002;
}
