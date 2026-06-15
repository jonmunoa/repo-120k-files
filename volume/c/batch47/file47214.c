// fichero 47214 -- macros y constantes -- MODIFICADO
#define LIMITE_47214 47414
#define FACTOR_47214 6

int aplicar_limite47214(int valor) {
    if (valor > LIMITE_47214) return LIMITE_47214;
    return valor * FACTOR_47214;
}
