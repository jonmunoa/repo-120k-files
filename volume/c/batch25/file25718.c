// fichero 25718 -- macros y constantes -- MODIFICADO
#define LIMITE_25718 25918
#define FACTOR_25718 5

int aplicar_limite25718(int valor) {
    if (valor > LIMITE_25718) return LIMITE_25718;
    return valor * FACTOR_25718;
}
