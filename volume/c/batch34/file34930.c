// fichero 34930 -- macros y constantes
#define LIMITE_34930 35030
#define FACTOR_34930 1

int aplicar_limite34930(int valor) {
    if (valor > LIMITE_34930) return LIMITE_34930;
    return valor * FACTOR_34930;
}
