// fichero 718 -- macros y constantes -- MODIFICADO
#define LIMITE_718 918
#define FACTOR_718 5

int aplicar_limite718(int valor) {
    if (valor > LIMITE_718) return LIMITE_718;
    return valor * FACTOR_718;
}
