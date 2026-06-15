// fichero 10486 -- macros y constantes -- MODIFICADO
#define LIMITE_10486 10686
#define FACTOR_10486 3

int aplicar_limite10486(int valor) {
    if (valor > LIMITE_10486) return LIMITE_10486;
    return valor * FACTOR_10486;
}
