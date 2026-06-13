// fichero 34146 -- macros y constantes
#define LIMITE_34146 34246
#define FACTOR_34146 2

int aplicar_limite34146(int valor) {
    if (valor > LIMITE_34146) return LIMITE_34146;
    return valor * FACTOR_34146;
}
