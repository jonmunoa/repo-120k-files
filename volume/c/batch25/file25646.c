// fichero 25646 -- macros y constantes -- MODIFICADO
#define LIMITE_25646 25846
#define FACTOR_25646 3

int aplicar_limite25646(int valor) {
    if (valor > LIMITE_25646) return LIMITE_25646;
    return valor * FACTOR_25646;
}
