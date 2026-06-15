// fichero 17082 -- macros y constantes -- MODIFICADO
#define LIMITE_17082 17282
#define FACTOR_17082 4

int aplicar_limite17082(int valor) {
    if (valor > LIMITE_17082) return LIMITE_17082;
    return valor * FACTOR_17082;
}
