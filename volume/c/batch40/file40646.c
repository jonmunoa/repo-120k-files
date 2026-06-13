// fichero 40646 -- macros y constantes
#define LIMITE_40646 40746
#define FACTOR_40646 2

int aplicar_limite40646(int valor) {
    if (valor > LIMITE_40646) return LIMITE_40646;
    return valor * FACTOR_40646;
}
