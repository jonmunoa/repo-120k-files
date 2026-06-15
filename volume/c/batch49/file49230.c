// fichero 49230 -- macros y constantes -- MODIFICADO
#define LIMITE_49230 49430
#define FACTOR_49230 2

int aplicar_limite49230(int valor) {
    if (valor > LIMITE_49230) return LIMITE_49230;
    return valor * FACTOR_49230;
}
