// fichero 20242 -- macros y constantes -- MODIFICADO
#define LIMITE_20242 20442
#define FACTOR_20242 4

int aplicar_limite20242(int valor) {
    if (valor > LIMITE_20242) return LIMITE_20242;
    return valor * FACTOR_20242;
}
