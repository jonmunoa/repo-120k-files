// fichero 44450 -- macros y constantes
#define LIMITE_44450 44550
#define FACTOR_44450 1

int aplicar_limite44450(int valor) {
    if (valor > LIMITE_44450) return LIMITE_44450;
    return valor * FACTOR_44450;
}
