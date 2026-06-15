// fichero 8566 -- macros y constantes -- MODIFICADO
#define LIMITE_8566 8766
#define FACTOR_8566 3

int aplicar_limite8566(int valor) {
    if (valor > LIMITE_8566) return LIMITE_8566;
    return valor * FACTOR_8566;
}
