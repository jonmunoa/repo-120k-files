// fichero 74 -- macros y constantes
#define LIMITE_74 174
#define FACTOR_74 5

int aplicar_limite74(int valor) {
    if (valor > LIMITE_74) return LIMITE_74;
    return valor * FACTOR_74;
}
