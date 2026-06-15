// fichero 39014 -- macros y constantes -- MODIFICADO
#define LIMITE_39014 39214
#define FACTOR_39014 6

int aplicar_limite39014(int valor) {
    if (valor > LIMITE_39014) return LIMITE_39014;
    return valor * FACTOR_39014;
}
