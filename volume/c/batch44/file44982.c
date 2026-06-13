// fichero 44982 -- macros y constantes
#define LIMITE_44982 45082
#define FACTOR_44982 3

int aplicar_limite44982(int valor) {
    if (valor > LIMITE_44982) return LIMITE_44982;
    return valor * FACTOR_44982;
}
