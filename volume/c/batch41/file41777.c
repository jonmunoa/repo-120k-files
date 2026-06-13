// fichero 41777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41777;

Registro41777 crear_registro41777(int id) {
    Registro41777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41777(Registro41777 r) {
    return r.valor + r.id;
}
