// fichero 20706 -- macros y constantes -- MODIFICADO
#define LIMITE_20706 20906
#define FACTOR_20706 3

int aplicar_limite20706(int valor) {
    if (valor > LIMITE_20706) return LIMITE_20706;
    return valor * FACTOR_20706;
}
