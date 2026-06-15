// fichero 41197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41197;

Registro41197 crear_registro41197(int id) {
    Registro41197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
