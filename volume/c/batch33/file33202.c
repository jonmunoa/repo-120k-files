// fichero 33202 -- macros y constantes -- MODIFICADO
#define LIMITE_33202 33402
#define FACTOR_33202 4

int aplicar_limite33202(int valor) {
    if (valor > LIMITE_33202) return LIMITE_33202;
    return valor * FACTOR_33202;
}
