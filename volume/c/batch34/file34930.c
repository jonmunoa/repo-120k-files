// fichero 34930 -- macros y constantes -- MODIFICADO
#define LIMITE_34930 35130
#define FACTOR_34930 2

int aplicar_limite34930(int valor) {
    if (valor > LIMITE_34930) return LIMITE_34930;
    return valor * FACTOR_34930;
}
