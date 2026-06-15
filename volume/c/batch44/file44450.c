// fichero 44450 -- macros y constantes -- MODIFICADO
#define LIMITE_44450 44650
#define FACTOR_44450 2

int aplicar_limite44450(int valor) {
    if (valor > LIMITE_44450) return LIMITE_44450;
    return valor * FACTOR_44450;
}
