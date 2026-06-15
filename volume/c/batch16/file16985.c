// fichero 16985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16985;

Registro16985 crear_registro16985(int id) {
    Registro16985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
