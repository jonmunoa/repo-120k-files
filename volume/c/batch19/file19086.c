// fichero 19086 -- macros y constantes -- MODIFICADO
#define LIMITE_19086 19286
#define FACTOR_19086 3

int aplicar_limite19086(int valor) {
    if (valor > LIMITE_19086) return LIMITE_19086;
    return valor * FACTOR_19086;
}
