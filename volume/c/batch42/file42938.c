// fichero 42938 -- macros y constantes -- MODIFICADO
#define LIMITE_42938 43138
#define FACTOR_42938 5

int aplicar_limite42938(int valor) {
    if (valor > LIMITE_42938) return LIMITE_42938;
    return valor * FACTOR_42938;
}
