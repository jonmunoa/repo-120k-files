// fichero 33226 -- macros y constantes
#define LIMITE_33226 33326
#define FACTOR_33226 2

int aplicar_limite33226(int valor) {
    if (valor > LIMITE_33226) return LIMITE_33226;
    return valor * FACTOR_33226;
}
