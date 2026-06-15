// fichero 41865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41865;

Registro41865 crear_registro41865(int id) {
    Registro41865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
