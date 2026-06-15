// fichero 48350 -- macros y constantes -- MODIFICADO
#define LIMITE_48350 48550
#define FACTOR_48350 2

int aplicar_limite48350(int valor) {
    if (valor > LIMITE_48350) return LIMITE_48350;
    return valor * FACTOR_48350;
}
