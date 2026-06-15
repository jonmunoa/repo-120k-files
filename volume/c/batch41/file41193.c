// fichero 41193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41193;

Registro41193 crear_registro41193(int id) {
    Registro41193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
