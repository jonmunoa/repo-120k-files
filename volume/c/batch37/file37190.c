// fichero 37190 -- macros y constantes -- MODIFICADO
#define LIMITE_37190 37390
#define FACTOR_37190 2

int aplicar_limite37190(int valor) {
    if (valor > LIMITE_37190) return LIMITE_37190;
    return valor * FACTOR_37190;
}
