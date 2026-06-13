// fichero 9777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9777;

Registro9777 crear_registro9777(int id) {
    Registro9777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9777(Registro9777 r) {
    return r.valor + r.id;
}
