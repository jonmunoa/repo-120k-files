// fichero 41398 -- macros y constantes -- MODIFICADO
#define LIMITE_41398 41598
#define FACTOR_41398 5

int aplicar_limite41398(int valor) {
    if (valor > LIMITE_41398) return LIMITE_41398;
    return valor * FACTOR_41398;
}
