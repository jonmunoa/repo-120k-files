// fichero 26993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26993;

Registro26993 crear_registro26993(int id) {
    Registro26993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
