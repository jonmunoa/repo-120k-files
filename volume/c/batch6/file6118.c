// fichero 6118 -- macros y constantes -- MODIFICADO
#define LIMITE_6118 6318
#define FACTOR_6118 5

int aplicar_limite6118(int valor) {
    if (valor > LIMITE_6118) return LIMITE_6118;
    return valor * FACTOR_6118;
}
