// fichero 35094 -- macros y constantes
#define LIMITE_35094 35194
#define FACTOR_35094 5

int aplicar_limite35094(int valor) {
    if (valor > LIMITE_35094) return LIMITE_35094;
    return valor * FACTOR_35094;
}
