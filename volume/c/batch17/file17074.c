// fichero 17074 -- macros y constantes -- MODIFICADO
#define LIMITE_17074 17274
#define FACTOR_17074 6

int aplicar_limite17074(int valor) {
    if (valor > LIMITE_17074) return LIMITE_17074;
    return valor * FACTOR_17074;
}
