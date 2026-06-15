// fichero 41145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41145;

Registro41145 crear_registro41145(int id) {
    Registro41145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
