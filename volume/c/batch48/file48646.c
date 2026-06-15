// fichero 48646 -- macros y constantes -- MODIFICADO
#define LIMITE_48646 48846
#define FACTOR_48646 3

int aplicar_limite48646(int valor) {
    if (valor > LIMITE_48646) return LIMITE_48646;
    return valor * FACTOR_48646;
}
