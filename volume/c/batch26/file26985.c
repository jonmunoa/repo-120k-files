// fichero 26985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26985;

Registro26985 crear_registro26985(int id) {
    Registro26985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
