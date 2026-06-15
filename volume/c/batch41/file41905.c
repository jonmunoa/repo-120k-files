// fichero 41905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41905;

Registro41905 crear_registro41905(int id) {
    Registro41905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
