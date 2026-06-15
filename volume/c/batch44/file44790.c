// fichero 44790 -- macros y constantes -- MODIFICADO
#define LIMITE_44790 44990
#define FACTOR_44790 2

int aplicar_limite44790(int valor) {
    if (valor > LIMITE_44790) return LIMITE_44790;
    return valor * FACTOR_44790;
}
