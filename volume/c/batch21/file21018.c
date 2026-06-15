// fichero 21018 -- macros y constantes -- MODIFICADO
#define LIMITE_21018 21218
#define FACTOR_21018 5

int aplicar_limite21018(int valor) {
    if (valor > LIMITE_21018) return LIMITE_21018;
    return valor * FACTOR_21018;
}
