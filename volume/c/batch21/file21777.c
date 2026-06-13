// fichero 21777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21777;

Registro21777 crear_registro21777(int id) {
    Registro21777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21777(Registro21777 r) {
    return r.valor + r.id;
}
