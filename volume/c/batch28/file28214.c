// fichero 28214 -- macros y constantes
#define LIMITE_28214 28314
#define FACTOR_28214 5

int aplicar_limite28214(int valor) {
    if (valor > LIMITE_28214) return LIMITE_28214;
    return valor * FACTOR_28214;
}
