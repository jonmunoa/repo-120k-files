// fichero 34214 -- macros y constantes
#define LIMITE_34214 34314
#define FACTOR_34214 5

int aplicar_limite34214(int valor) {
    if (valor > LIMITE_34214) return LIMITE_34214;
    return valor * FACTOR_34214;
}
