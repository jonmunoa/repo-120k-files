// fichero 23358 -- macros y constantes -- MODIFICADO
#define LIMITE_23358 23558
#define FACTOR_23358 5

int aplicar_limite23358(int valor) {
    if (valor > LIMITE_23358) return LIMITE_23358;
    return valor * FACTOR_23358;
}
