// fichero 12422 -- macros y constantes -- MODIFICADO
#define LIMITE_12422 12622
#define FACTOR_12422 4

int aplicar_limite12422(int valor) {
    if (valor > LIMITE_12422) return LIMITE_12422;
    return valor * FACTOR_12422;
}
