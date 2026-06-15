// fichero 8646 -- macros y constantes -- MODIFICADO
#define LIMITE_8646 8846
#define FACTOR_8646 3

int aplicar_limite8646(int valor) {
    if (valor > LIMITE_8646) return LIMITE_8646;
    return valor * FACTOR_8646;
}
