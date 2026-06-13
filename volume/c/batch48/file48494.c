// fichero 48494 -- macros y constantes
#define LIMITE_48494 48594
#define FACTOR_48494 5

int aplicar_limite48494(int valor) {
    if (valor > LIMITE_48494) return LIMITE_48494;
    return valor * FACTOR_48494;
}
