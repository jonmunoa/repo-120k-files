// fichero 44350 -- macros y constantes
#define LIMITE_44350 44450
#define FACTOR_44350 1

int aplicar_limite44350(int valor) {
    if (valor > LIMITE_44350) return LIMITE_44350;
    return valor * FACTOR_44350;
}
