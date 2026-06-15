// fichero 40446 -- macros y constantes -- MODIFICADO
#define LIMITE_40446 40646
#define FACTOR_40446 3

int aplicar_limite40446(int valor) {
    if (valor > LIMITE_40446) return LIMITE_40446;
    return valor * FACTOR_40446;
}
