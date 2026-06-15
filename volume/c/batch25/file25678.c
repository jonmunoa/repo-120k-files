// fichero 25678 -- macros y constantes -- MODIFICADO
#define LIMITE_25678 25878
#define FACTOR_25678 5

int aplicar_limite25678(int valor) {
    if (valor > LIMITE_25678) return LIMITE_25678;
    return valor * FACTOR_25678;
}
