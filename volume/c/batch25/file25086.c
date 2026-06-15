// fichero 25086 -- macros y constantes -- MODIFICADO
#define LIMITE_25086 25286
#define FACTOR_25086 3

int aplicar_limite25086(int valor) {
    if (valor > LIMITE_25086) return LIMITE_25086;
    return valor * FACTOR_25086;
}
