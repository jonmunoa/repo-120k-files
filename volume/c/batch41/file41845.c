// fichero 41845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41845;

Registro41845 crear_registro41845(int id) {
    Registro41845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
