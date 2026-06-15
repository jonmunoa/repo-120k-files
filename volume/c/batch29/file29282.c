// fichero 29282 -- macros y constantes -- MODIFICADO
#define LIMITE_29282 29482
#define FACTOR_29282 4

int aplicar_limite29282(int valor) {
    if (valor > LIMITE_29282) return LIMITE_29282;
    return valor * FACTOR_29282;
}
