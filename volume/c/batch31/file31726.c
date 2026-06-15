// fichero 31726 -- macros y constantes -- MODIFICADO
#define LIMITE_31726 31926
#define FACTOR_31726 3

int aplicar_limite31726(int valor) {
    if (valor > LIMITE_31726) return LIMITE_31726;
    return valor * FACTOR_31726;
}
