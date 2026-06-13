// fichero 40810 -- macros y constantes
#define LIMITE_40810 40910
#define FACTOR_40810 1

int aplicar_limite40810(int valor) {
    if (valor > LIMITE_40810) return LIMITE_40810;
    return valor * FACTOR_40810;
}
