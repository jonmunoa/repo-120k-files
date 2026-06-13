// fichero 34002 -- macros y constantes
#define LIMITE_34002 34102
#define FACTOR_34002 3

int aplicar_limite34002(int valor) {
    if (valor > LIMITE_34002) return LIMITE_34002;
    return valor * FACTOR_34002;
}
