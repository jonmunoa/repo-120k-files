// fichero 12562 -- macros y constantes -- MODIFICADO
#define LIMITE_12562 12762
#define FACTOR_12562 4

int aplicar_limite12562(int valor) {
    if (valor > LIMITE_12562) return LIMITE_12562;
    return valor * FACTOR_12562;
}
