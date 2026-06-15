// fichero 47202 -- macros y constantes -- MODIFICADO
#define LIMITE_47202 47402
#define FACTOR_47202 4

int aplicar_limite47202(int valor) {
    if (valor > LIMITE_47202) return LIMITE_47202;
    return valor * FACTOR_47202;
}
