// fichero 39350 -- macros y constantes -- MODIFICADO
#define LIMITE_39350 39550
#define FACTOR_39350 2

int aplicar_limite39350(int valor) {
    if (valor > LIMITE_39350) return LIMITE_39350;
    return valor * FACTOR_39350;
}
