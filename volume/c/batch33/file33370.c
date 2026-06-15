// fichero 33370 -- macros y constantes -- MODIFICADO
#define LIMITE_33370 33570
#define FACTOR_33370 2

int aplicar_limite33370(int valor) {
    if (valor > LIMITE_33370) return LIMITE_33370;
    return valor * FACTOR_33370;
}
