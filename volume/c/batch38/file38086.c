// fichero 38086 -- macros y constantes -- MODIFICADO
#define LIMITE_38086 38286
#define FACTOR_38086 3

int aplicar_limite38086(int valor) {
    if (valor > LIMITE_38086) return LIMITE_38086;
    return valor * FACTOR_38086;
}
