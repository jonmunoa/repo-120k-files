// fichero 78 -- macros y constantes
#define LIMITE_78 178
#define FACTOR_78 4

int aplicar_limite78(int valor) {
    if (valor > LIMITE_78) return LIMITE_78;
    return valor * FACTOR_78;
}
