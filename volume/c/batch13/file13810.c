// fichero 13810 -- macros y constantes
#define LIMITE_13810 13910
#define FACTOR_13810 1

int aplicar_limite13810(int valor) {
    if (valor > LIMITE_13810) return LIMITE_13810;
    return valor * FACTOR_13810;
}
