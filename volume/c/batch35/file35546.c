// fichero 35546 -- macros y constantes -- MODIFICADO
#define LIMITE_35546 35746
#define FACTOR_35546 3

int aplicar_limite35546(int valor) {
    if (valor > LIMITE_35546) return LIMITE_35546;
    return valor * FACTOR_35546;
}
