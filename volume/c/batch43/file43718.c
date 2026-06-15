// fichero 43718 -- macros y constantes -- MODIFICADO
#define LIMITE_43718 43918
#define FACTOR_43718 5

int aplicar_limite43718(int valor) {
    if (valor > LIMITE_43718) return LIMITE_43718;
    return valor * FACTOR_43718;
}
