// fichero 24350 -- macros y constantes -- MODIFICADO
#define LIMITE_24350 24550
#define FACTOR_24350 2

int aplicar_limite24350(int valor) {
    if (valor > LIMITE_24350) return LIMITE_24350;
    return valor * FACTOR_24350;
}
