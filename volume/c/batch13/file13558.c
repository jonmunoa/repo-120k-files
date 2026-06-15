// fichero 13558 -- macros y constantes -- MODIFICADO
#define LIMITE_13558 13758
#define FACTOR_13558 5

int aplicar_limite13558(int valor) {
    if (valor > LIMITE_13558) return LIMITE_13558;
    return valor * FACTOR_13558;
}
