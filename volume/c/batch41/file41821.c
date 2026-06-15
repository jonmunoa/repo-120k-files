// fichero 41821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41821;

Registro41821 crear_registro41821(int id) {
    Registro41821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
