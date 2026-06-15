// fichero 20726 -- macros y constantes -- MODIFICADO
#define LIMITE_20726 20926
#define FACTOR_20726 3

int aplicar_limite20726(int valor) {
    if (valor > LIMITE_20726) return LIMITE_20726;
    return valor * FACTOR_20726;
}
