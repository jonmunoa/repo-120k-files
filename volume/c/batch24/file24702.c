// fichero 24702 -- macros y constantes -- MODIFICADO
#define LIMITE_24702 24902
#define FACTOR_24702 4

int aplicar_limite24702(int valor) {
    if (valor > LIMITE_24702) return LIMITE_24702;
    return valor * FACTOR_24702;
}
