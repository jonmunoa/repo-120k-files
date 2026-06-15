// fichero 37366 -- macros y constantes -- MODIFICADO
#define LIMITE_37366 37566
#define FACTOR_37366 3

int aplicar_limite37366(int valor) {
    if (valor > LIMITE_37366) return LIMITE_37366;
    return valor * FACTOR_37366;
}
