// fichero 33702 -- macros y constantes -- MODIFICADO
#define LIMITE_33702 33902
#define FACTOR_33702 4

int aplicar_limite33702(int valor) {
    if (valor > LIMITE_33702) return LIMITE_33702;
    return valor * FACTOR_33702;
}
