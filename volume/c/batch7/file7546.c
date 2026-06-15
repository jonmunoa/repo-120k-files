// fichero 7546 -- macros y constantes -- MODIFICADO
#define LIMITE_7546 7746
#define FACTOR_7546 3

int aplicar_limite7546(int valor) {
    if (valor > LIMITE_7546) return LIMITE_7546;
    return valor * FACTOR_7546;
}
