// fichero 13810 -- macros y constantes -- MODIFICADO
#define LIMITE_13810 14010
#define FACTOR_13810 2

int aplicar_limite13810(int valor) {
    if (valor > LIMITE_13810) return LIMITE_13810;
    return valor * FACTOR_13810;
}
