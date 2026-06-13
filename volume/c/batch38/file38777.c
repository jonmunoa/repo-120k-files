// fichero 38777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38777;

Registro38777 crear_registro38777(int id) {
    Registro38777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38777(Registro38777 r) {
    return r.valor + r.id;
}
