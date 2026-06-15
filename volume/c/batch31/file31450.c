// fichero 31450 -- macros y constantes -- MODIFICADO
#define LIMITE_31450 31650
#define FACTOR_31450 2

int aplicar_limite31450(int valor) {
    if (valor > LIMITE_31450) return LIMITE_31450;
    return valor * FACTOR_31450;
}
