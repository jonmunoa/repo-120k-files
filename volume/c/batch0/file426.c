// fichero 426 -- macros y constantes
#define LIMITE_426 526
#define FACTOR_426 2

int aplicar_limite426(int valor) {
    if (valor > LIMITE_426) return LIMITE_426;
    return valor * FACTOR_426;
}
