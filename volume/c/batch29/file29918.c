// fichero 29918 -- macros y constantes -- MODIFICADO
#define LIMITE_29918 30118
#define FACTOR_29918 5

int aplicar_limite29918(int valor) {
    if (valor > LIMITE_29918) return LIMITE_29918;
    return valor * FACTOR_29918;
}
