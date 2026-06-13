// fichero 6190 -- macros y constantes
#define LIMITE_6190 6290
#define FACTOR_6190 1

int aplicar_limite6190(int valor) {
    if (valor > LIMITE_6190) return LIMITE_6190;
    return valor * FACTOR_6190;
}
