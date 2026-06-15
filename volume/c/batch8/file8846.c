// fichero 8846 -- macros y constantes -- MODIFICADO
#define LIMITE_8846 9046
#define FACTOR_8846 3

int aplicar_limite8846(int valor) {
    if (valor > LIMITE_8846) return LIMITE_8846;
    return valor * FACTOR_8846;
}
