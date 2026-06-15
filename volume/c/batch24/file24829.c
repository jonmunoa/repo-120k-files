// fichero 24829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24829;

Registro24829 crear_registro24829(int id) {
    Registro24829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
