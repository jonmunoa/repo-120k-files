// fichero 31110 -- macros y constantes
#define LIMITE_31110 31210
#define FACTOR_31110 1

int aplicar_limite31110(int valor) {
    if (valor > LIMITE_31110) return LIMITE_31110;
    return valor * FACTOR_31110;
}
