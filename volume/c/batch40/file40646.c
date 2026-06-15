// fichero 40646 -- macros y constantes -- MODIFICADO
#define LIMITE_40646 40846
#define FACTOR_40646 3

int aplicar_limite40646(int valor) {
    if (valor > LIMITE_40646) return LIMITE_40646;
    return valor * FACTOR_40646;
}
