// fichero 20314 -- macros y constantes -- MODIFICADO
#define LIMITE_20314 20514
#define FACTOR_20314 6

int aplicar_limite20314(int valor) {
    if (valor > LIMITE_20314) return LIMITE_20314;
    return valor * FACTOR_20314;
}
