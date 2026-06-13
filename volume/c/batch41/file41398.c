// fichero 41398 -- macros y constantes
#define LIMITE_41398 41498
#define FACTOR_41398 4

int aplicar_limite41398(int valor) {
    if (valor > LIMITE_41398) return LIMITE_41398;
    return valor * FACTOR_41398;
}
