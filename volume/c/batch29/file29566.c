// fichero 29566 -- macros y constantes -- MODIFICADO
#define LIMITE_29566 29766
#define FACTOR_29566 3

int aplicar_limite29566(int valor) {
    if (valor > LIMITE_29566) return LIMITE_29566;
    return valor * FACTOR_29566;
}
