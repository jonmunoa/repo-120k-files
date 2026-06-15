// fichero 31486 -- macros y constantes -- MODIFICADO
#define LIMITE_31486 31686
#define FACTOR_31486 3

int aplicar_limite31486(int valor) {
    if (valor > LIMITE_31486) return LIMITE_31486;
    return valor * FACTOR_31486;
}
