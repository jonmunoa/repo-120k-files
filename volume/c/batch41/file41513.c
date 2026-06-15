// fichero 41513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41513;

Registro41513 crear_registro41513(int id) {
    Registro41513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
