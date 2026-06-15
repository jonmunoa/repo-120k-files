// fichero 41989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41989;

Registro41989 crear_registro41989(int id) {
    Registro41989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
