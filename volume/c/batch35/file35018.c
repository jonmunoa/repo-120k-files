// fichero 35018 -- macros y constantes -- MODIFICADO
#define LIMITE_35018 35218
#define FACTOR_35018 5

int aplicar_limite35018(int valor) {
    if (valor > LIMITE_35018) return LIMITE_35018;
    return valor * FACTOR_35018;
}
