// fichero 43718 -- macros y constantes
#define LIMITE_43718 43818
#define FACTOR_43718 4

int aplicar_limite43718(int valor) {
    if (valor > LIMITE_43718) return LIMITE_43718;
    return valor * FACTOR_43718;
}
