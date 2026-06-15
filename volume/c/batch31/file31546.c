// fichero 31546 -- macros y constantes -- MODIFICADO
#define LIMITE_31546 31746
#define FACTOR_31546 3

int aplicar_limite31546(int valor) {
    if (valor > LIMITE_31546) return LIMITE_31546;
    return valor * FACTOR_31546;
}
