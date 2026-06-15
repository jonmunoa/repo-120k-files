// fichero 33226 -- macros y constantes -- MODIFICADO
#define LIMITE_33226 33426
#define FACTOR_33226 3

int aplicar_limite33226(int valor) {
    if (valor > LIMITE_33226) return LIMITE_33226;
    return valor * FACTOR_33226;
}
