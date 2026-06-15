// fichero 40086 -- macros y constantes -- MODIFICADO
#define LIMITE_40086 40286
#define FACTOR_40086 3

int aplicar_limite40086(int valor) {
    if (valor > LIMITE_40086) return LIMITE_40086;
    return valor * FACTOR_40086;
}
