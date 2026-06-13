// fichero 38074 -- macros y constantes
#define LIMITE_38074 38174
#define FACTOR_38074 5

int aplicar_limite38074(int valor) {
    if (valor > LIMITE_38074) return LIMITE_38074;
    return valor * FACTOR_38074;
}
