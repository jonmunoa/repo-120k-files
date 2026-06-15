// fichero 26917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26917;

Registro26917 crear_registro26917(int id) {
    Registro26917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
