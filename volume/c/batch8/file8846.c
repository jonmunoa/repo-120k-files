// fichero 8846 -- macros y constantes
#define LIMITE_8846 8946
#define FACTOR_8846 2

int aplicar_limite8846(int valor) {
    if (valor > LIMITE_8846) return LIMITE_8846;
    return valor * FACTOR_8846;
}
