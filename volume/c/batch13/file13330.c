// fichero 13330 -- macros y constantes -- MODIFICADO
#define LIMITE_13330 13530
#define FACTOR_13330 2

int aplicar_limite13330(int valor) {
    if (valor > LIMITE_13330) return LIMITE_13330;
    return valor * FACTOR_13330;
}
