// fichero 41605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41605;

Registro41605 crear_registro41605(int id) {
    Registro41605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
