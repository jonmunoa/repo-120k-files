// fichero 3201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3201;

Registro3201 crear_registro3201(int id) {
    Registro3201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
