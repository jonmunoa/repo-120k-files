// fichero 41969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41969;

Registro41969 crear_registro41969(int id) {
    Registro41969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
