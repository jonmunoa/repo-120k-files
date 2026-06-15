// fichero 37322 -- macros y constantes -- MODIFICADO
#define LIMITE_37322 37522
#define FACTOR_37322 4

int aplicar_limite37322(int valor) {
    if (valor > LIMITE_37322) return LIMITE_37322;
    return valor * FACTOR_37322;
}
