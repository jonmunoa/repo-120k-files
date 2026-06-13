// fichero 47190 -- macros y constantes
#define LIMITE_47190 47290
#define FACTOR_47190 1

int aplicar_limite47190(int valor) {
    if (valor > LIMITE_47190) return LIMITE_47190;
    return valor * FACTOR_47190;
}
