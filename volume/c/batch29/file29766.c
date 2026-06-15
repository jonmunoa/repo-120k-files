// fichero 29766 -- macros y constantes -- MODIFICADO
#define LIMITE_29766 29966
#define FACTOR_29766 3

int aplicar_limite29766(int valor) {
    if (valor > LIMITE_29766) return LIMITE_29766;
    return valor * FACTOR_29766;
}
