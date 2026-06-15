// fichero 40282 -- macros y constantes -- MODIFICADO
#define LIMITE_40282 40482
#define FACTOR_40282 4

int aplicar_limite40282(int valor) {
    if (valor > LIMITE_40282) return LIMITE_40282;
    return valor * FACTOR_40282;
}
