// fichero 38078 -- macros y constantes -- MODIFICADO
#define LIMITE_38078 38278
#define FACTOR_38078 5

int aplicar_limite38078(int valor) {
    if (valor > LIMITE_38078) return LIMITE_38078;
    return valor * FACTOR_38078;
}
