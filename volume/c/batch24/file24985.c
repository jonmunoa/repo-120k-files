// fichero 24985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24985;

Registro24985 crear_registro24985(int id) {
    Registro24985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
