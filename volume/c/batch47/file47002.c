// fichero 47002 -- macros y constantes -- MODIFICADO
#define LIMITE_47002 47202
#define FACTOR_47002 4

int aplicar_limite47002(int valor) {
    if (valor > LIMITE_47002) return LIMITE_47002;
    return valor * FACTOR_47002;
}
