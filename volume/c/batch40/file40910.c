// fichero 40910 -- macros y constantes -- MODIFICADO
#define LIMITE_40910 41110
#define FACTOR_40910 2

int aplicar_limite40910(int valor) {
    if (valor > LIMITE_40910) return LIMITE_40910;
    return valor * FACTOR_40910;
}
