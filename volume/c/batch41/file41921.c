// fichero 41921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41921;

Registro41921 crear_registro41921(int id) {
    Registro41921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
