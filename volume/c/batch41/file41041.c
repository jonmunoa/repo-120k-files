// fichero 41041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41041;

Registro41041 crear_registro41041(int id) {
    Registro41041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41041(Registro41041 r) {
    return r.valor + r.id;
}
