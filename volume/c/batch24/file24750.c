// fichero 24750 -- macros y constantes
#define LIMITE_24750 24850
#define FACTOR_24750 1

int aplicar_limite24750(int valor) {
    if (valor > LIMITE_24750) return LIMITE_24750;
    return valor * FACTOR_24750;
}
