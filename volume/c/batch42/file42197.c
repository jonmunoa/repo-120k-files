// fichero 42197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42197;

Registro42197 crear_registro42197(int id) {
    Registro42197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42197(Registro42197 r) {
    return r.valor + r.id;
}
