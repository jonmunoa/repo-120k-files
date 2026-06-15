// fichero 8650 -- macros y constantes -- MODIFICADO
#define LIMITE_8650 8850
#define FACTOR_8650 2

int aplicar_limite8650(int valor) {
    if (valor > LIMITE_8650) return LIMITE_8650;
    return valor * FACTOR_8650;
}
