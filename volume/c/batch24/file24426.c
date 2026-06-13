// fichero 24426 -- macros y constantes
#define LIMITE_24426 24526
#define FACTOR_24426 2

int aplicar_limite24426(int valor) {
    if (valor > LIMITE_24426) return LIMITE_24426;
    return valor * FACTOR_24426;
}
