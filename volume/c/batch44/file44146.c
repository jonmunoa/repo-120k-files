// fichero 44146 -- macros y constantes -- MODIFICADO
#define LIMITE_44146 44346
#define FACTOR_44146 3

int aplicar_limite44146(int valor) {
    if (valor > LIMITE_44146) return LIMITE_44146;
    return valor * FACTOR_44146;
}
