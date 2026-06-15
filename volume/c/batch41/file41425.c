// fichero 41425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41425;

Registro41425 crear_registro41425(int id) {
    Registro41425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
