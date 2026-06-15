// fichero 41601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41601;

Registro41601 crear_registro41601(int id) {
    Registro41601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
