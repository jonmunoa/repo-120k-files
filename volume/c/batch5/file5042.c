// fichero 5042 -- macros y constantes -- MODIFICADO
#define LIMITE_5042 5242
#define FACTOR_5042 4

int aplicar_limite5042(int valor) {
    if (valor > LIMITE_5042) return LIMITE_5042;
    return valor * FACTOR_5042;
}
