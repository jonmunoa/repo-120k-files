// fichero 47222 -- macros y constantes
#define LIMITE_47222 47322
#define FACTOR_47222 3

int aplicar_limite47222(int valor) {
    if (valor > LIMITE_47222) return LIMITE_47222;
    return valor * FACTOR_47222;
}
