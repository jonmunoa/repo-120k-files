// fichero 34978 -- macros y constantes
#define LIMITE_34978 35078
#define FACTOR_34978 4

int aplicar_limite34978(int valor) {
    if (valor > LIMITE_34978) return LIMITE_34978;
    return valor * FACTOR_34978;
}
