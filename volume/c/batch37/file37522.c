// fichero 37522 -- macros y constantes -- MODIFICADO
#define LIMITE_37522 37722
#define FACTOR_37522 4

int aplicar_limite37522(int valor) {
    if (valor > LIMITE_37522) return LIMITE_37522;
    return valor * FACTOR_37522;
}
