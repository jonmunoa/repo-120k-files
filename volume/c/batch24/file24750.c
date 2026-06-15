// fichero 24750 -- macros y constantes -- MODIFICADO
#define LIMITE_24750 24950
#define FACTOR_24750 2

int aplicar_limite24750(int valor) {
    if (valor > LIMITE_24750) return LIMITE_24750;
    return valor * FACTOR_24750;
}
