// fichero 38546 -- macros y constantes -- MODIFICADO
#define LIMITE_38546 38746
#define FACTOR_38546 3

int aplicar_limite38546(int valor) {
    if (valor > LIMITE_38546) return LIMITE_38546;
    return valor * FACTOR_38546;
}
