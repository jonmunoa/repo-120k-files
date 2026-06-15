// fichero 24718 -- macros y constantes -- MODIFICADO
#define LIMITE_24718 24918
#define FACTOR_24718 5

int aplicar_limite24718(int valor) {
    if (valor > LIMITE_24718) return LIMITE_24718;
    return valor * FACTOR_24718;
}
