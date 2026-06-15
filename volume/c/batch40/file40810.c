// fichero 40810 -- macros y constantes -- MODIFICADO
#define LIMITE_40810 41010
#define FACTOR_40810 2

int aplicar_limite40810(int valor) {
    if (valor > LIMITE_40810) return LIMITE_40810;
    return valor * FACTOR_40810;
}
