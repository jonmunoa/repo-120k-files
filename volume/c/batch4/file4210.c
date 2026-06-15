// fichero 4210 -- macros y constantes -- MODIFICADO
#define LIMITE_4210 4410
#define FACTOR_4210 2

int aplicar_limite4210(int valor) {
    if (valor > LIMITE_4210) return LIMITE_4210;
    return valor * FACTOR_4210;
}
