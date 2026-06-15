// fichero 48654 -- macros y constantes -- MODIFICADO
#define LIMITE_48654 48854
#define FACTOR_48654 6

int aplicar_limite48654(int valor) {
    if (valor > LIMITE_48654) return LIMITE_48654;
    return valor * FACTOR_48654;
}
