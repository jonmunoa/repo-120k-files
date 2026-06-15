// fichero 24646 -- macros y constantes -- MODIFICADO
#define LIMITE_24646 24846
#define FACTOR_24646 3

int aplicar_limite24646(int valor) {
    if (valor > LIMITE_24646) return LIMITE_24646;
    return valor * FACTOR_24646;
}
