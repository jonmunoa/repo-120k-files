// fichero 47190 -- macros y constantes -- MODIFICADO
#define LIMITE_47190 47390
#define FACTOR_47190 2

int aplicar_limite47190(int valor) {
    if (valor > LIMITE_47190) return LIMITE_47190;
    return valor * FACTOR_47190;
}
