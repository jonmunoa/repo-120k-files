// fichero 33902 -- macros y constantes
#define LIMITE_33902 34002
#define FACTOR_33902 3

int aplicar_limite33902(int valor) {
    if (valor > LIMITE_33902) return LIMITE_33902;
    return valor * FACTOR_33902;
}
