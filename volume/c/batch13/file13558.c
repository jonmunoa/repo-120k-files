// fichero 13558 -- macros y constantes
#define LIMITE_13558 13658
#define FACTOR_13558 4

int aplicar_limite13558(int valor) {
    if (valor > LIMITE_13558) return LIMITE_13558;
    return valor * FACTOR_13558;
}
