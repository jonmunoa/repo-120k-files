// fichero 40766 -- macros y constantes -- MODIFICADO
#define LIMITE_40766 40966
#define FACTOR_40766 3

int aplicar_limite40766(int valor) {
    if (valor > LIMITE_40766) return LIMITE_40766;
    return valor * FACTOR_40766;
}
