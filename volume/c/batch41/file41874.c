// fichero 41874 -- macros y constantes
#define LIMITE_41874 41974
#define FACTOR_41874 5

int aplicar_limite41874(int valor) {
    if (valor > LIMITE_41874) return LIMITE_41874;
    return valor * FACTOR_41874;
}
