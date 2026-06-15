// fichero 15350 -- macros y constantes -- MODIFICADO
#define LIMITE_15350 15550
#define FACTOR_15350 2

int aplicar_limite15350(int valor) {
    if (valor > LIMITE_15350) return LIMITE_15350;
    return valor * FACTOR_15350;
}
