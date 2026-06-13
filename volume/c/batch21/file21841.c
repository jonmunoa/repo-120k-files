// fichero 21841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21841;

Registro21841 crear_registro21841(int id) {
    Registro21841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21841(Registro21841 r) {
    return r.valor + r.id;
}
